/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** proto for bsq project
*/

#ifndef bsq_
    #define bsq_

int bsq(char **map, int nb_rows, int nb_cols);
int find_nb_rows(char const *filepath);
int find_nb_cols(char const *filepath);
char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);
int is_square_of_size(char **map, int posx, int posy, int square_size);
int if_square(char **map, int i, int j);
char **replace_dot(char **map, int posx, int posy, int square_size);
int check_chars(char **map, int nb_rows, int nb_cols);
int find_biggest_size(char **map, int nb_rows, int nb_cols);
char **put_x_right_coordinates(char **map, int nb_rows, \
int nb_cols, int biggest_size);

#endif /* !bsq */
