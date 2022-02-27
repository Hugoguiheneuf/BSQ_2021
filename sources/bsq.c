/*
** EPITECH PROJECT, 2021
** bsq.c
** File description:
** finds biggest square primary fucntion
*/

#include <sys/types.h>
#include <sys/stat.h>
#include "../include/my.h"
#include "../include/bsq.h"

int bsq(char **map, int nb_rows, int nb_cols)
{
    int biggest_size = find_biggest_size(map, nb_rows, nb_cols);
    char **map_x = put_x_right_coordinates(map, \
    nb_rows, nb_cols, biggest_size);

    for (int i = 1; i <= nb_rows; i++) {
        my_putstr(map_x[i]);
    }
    return (0);
}
