/*
** EPITECH PROJECT, 2021
** find_biggest_square.c
** File description:
** functions to find biggest square in the map
*/

#include "../include/my.h"
#include "../include/bsq.h"

char **put_x_right_coordinates(char **map, int nb_rows, \
int nb_cols, int biggest_size)
{
    if (nb_rows == 1) {
        for (int pos = 0; pos < nb_cols; pos++) {
            if (map[1][pos] == '.') {
                replace_dot(map, 1, pos, 1);
                return (map);
            }
        }
    }
    for (int posx = 0; posx < nb_rows; posx++) {
        for (int posy = 0; posy < nb_cols; posy++) {
            if (is_square_of_size(map, posx, posy, biggest_size) == 1) {
                replace_dot(map, posx, posy, biggest_size);
                return (map);
            }
        }
    }
    return (map);
}

int find_biggest_size(char **map, int nb_rows, int nb_cols)
{
    int posx = 1;
    int posy = 0;
    int square_size = 1;

    while ((posx < nb_rows) && (nb_rows - posx >= square_size)) {
        while ((posy < nb_cols) && (nb_cols - posy >= square_size)) {
            if (is_square_of_size(map, posx, posy, square_size) == 1) {
                square_size++;
            } else {
                posy++;
            }
        }
        posx++;
        posy = 0;
    }
    if (square_size == 1) {
        return (square_size);
    }
    return (square_size - 1);
}
