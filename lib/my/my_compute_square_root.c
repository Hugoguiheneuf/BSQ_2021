/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** returns square root of nb
*/

int my_compute_square_root(int nb)
{
    int result = 0;

    while ((result * result) < nb) {
        result++;
    }
    if (result * result > nb)
        return (0);
    return (result);
}
