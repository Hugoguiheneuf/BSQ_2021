/*
** EPITECH PROJECT, 2021
** tools_square.c
** File description:
** tools for finding square, putting X instead of '.' ...
*/

#include "../include/my.h"
#include "../include/bsq.h"

char **replace_dot(char **map, int posx, int posy, int biggest_size)
{
    for (int i = posx; i < posx + biggest_size; i++) {
        for (int j = posy; j < posy + biggest_size; j++) {
            map[i][j] = 'x';
        }
    }
    return (map);
}

int is_square_of_size(char **map, int rows, int cols, int square_size)
{
    for (int i = rows; i < rows + square_size; i++) {
        for (int j = cols; j < cols + square_size; j++) {
            if (map[i][j] != '.')
                return (0);
        }
    }
    return (1);
}
