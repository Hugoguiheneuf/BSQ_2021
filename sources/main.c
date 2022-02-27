/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main for bsq
*/

#include <sys/types.h>
#include <sys/stat.h>
#include "../include/my.h"
#include "../include/bsq.h"
#include <fcntl.h>

int main(int ac, char **av)
{
    char *filepath;
    int nb_rows;
    int nb_cols;
    char **map;

    if (ac != 2)
        return (84);
    filepath = av[1];
    if (open(filepath, O_RDONLY) == -1)
        return (84);
    nb_rows = find_nb_rows(filepath);
    nb_cols = find_nb_cols(filepath);
    map = load_2d_arr_from_file(filepath, nb_rows, nb_cols);
    if (check_chars(map, nb_rows, nb_cols) == 1)
        return (84);
    if ((nb_rows < 1) || (nb_cols < 1))
        return (84);
    else
        bsq(map, nb_rows, nb_cols);
    return (0);
}
