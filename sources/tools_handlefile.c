/*
** EPITECH PROJECT, 2021
** tools_handlfile.c
** File description:
** tools for opening, reading file, allowing buffer...
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

int check_chars(char **map, int nb_rows, int nb_cols)
{
    for (int i = 0; i <= nb_rows; i++) {
        for (int j = 0; j <= nb_cols; j++) {
            if ((map[i][j] != '.') && (map[i][j] != 'o')\
            && (map[i][j] < '0' || map[i][j] > '9') && \
            (map[i][j] != '\n') && (map[i][j] != '\0')) {
                return (1);
            }
        }
    }
    return (0);
}

int find_nb_rows(char const *filepath)
{
    struct stat s;
    stat(filepath, &s);
    char buffer[s.st_size];
    int fd = open(filepath, O_RDONLY);
    read(fd, buffer, s.st_size);
    char first_line[80];
    int nb_rows;

    for (int i = 0; buffer[i] != '\n'; i++) {
        first_line[i] = buffer[i];
    }
    nb_rows = my_getnbr(first_line);
    return (nb_rows);
}

int find_nb_cols(char const *filepath)
{
    struct stat s;
    stat(filepath, &s);
    char buffer[s.st_size];
    int fd = open(filepath, O_RDONLY);
    read(fd, buffer, s.st_size);
    int nb_cols;
    int i = 0;

    while (buffer[i] != '\n')
        i++;
    nb_cols = (((s.st_size - i) / find_nb_rows(filepath)) - 1);
    return (nb_cols);
}

char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols)
{
    struct stat s;
    stat(filepath, &s);
    char buffer[s.st_size];
    int fd = open(filepath, O_RDONLY);
    read(fd, buffer, s.st_size);
    char **nmz = malloc(sizeof(char *) * nb_rows);
    int k = 0;
    int j = 0;

    for (int i = 0; i <= nb_rows; i++, k++) {
        nmz[i] = malloc(sizeof(char) * nb_cols + 1);
        for (j = 0; buffer[k] != '\n'; j++, k++) {
            nmz[i][j] = buffer[k];
        }
        nmz[i][j] = buffer[k];
        nmz[i][j + 1] = '\0';
    }
    close(fd);
    return (nmz);
}
