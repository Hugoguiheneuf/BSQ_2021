/*
** EPITECH PROJECT, 2021
** conversions.c
** File description:
** every conversion function needeed for my_printf
*/

#include "my.h"

int int_to_octal(int nb)
{
    int i = 1;
    int nb_octal = 0;
    int remainder;

    while (nb != 0) {
        remainder = nb % 8;
        nb_octal += remainder * i;
        i *= 10;
        nb /= 8;
    }
    return (nb_octal);
}

int signed_int_to_unsigned(int nb)
{
    if (nb > 0)
        return (nb);
    else {
        nb *= (-1);
        return (nb);
    }
}

void int_to_hexa_min(long long nb)
{
    int i = 0;
    int remainder = 0;
    char nb_hexa[100];

    while (nb != 0) {
        remainder = nb % 16;
        if (remainder < 10) {
            nb_hexa[i] = remainder + 48;
            i++;
        } else {
            nb_hexa[i] = remainder + 87;
            i++;
        }
        nb /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(nb_hexa[j]);
    }
}

void int_to_hexa_maj(long long nb)
{
    int i = 0;
    int remainder = 0;
    char nb_hexa[100];

    while (nb != 0) {
        remainder = nb % 16;
        if (remainder < 10) {
            nb_hexa[i] = remainder + 48;
            i++;
        } else {
            nb_hexa[i] = remainder + 55;
            i++;
        }
        nb /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(nb_hexa[j]);
    }
}

void int_to_binary(int nb)
{
    int i = 0;
    int nb_binary[32];

    while (nb > 0) {
        nb_binary[i] = nb % 2;
        nb /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_put_nbr(nb_binary[j]);
    }
}
