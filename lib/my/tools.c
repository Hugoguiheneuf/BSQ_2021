/*
** EPITECH PROJECT, 2021
** tools.c
** File description:
** functions for %S and %p for my_printf
*/

#include "my.h"
#include <stdarg.h>

int my_nbrlen(int nb)
{
    int x = 1;
    int y = 1;

    while (nb >= x) {
        x *= 10;
        y++;
    }
    return (y);
}

void print_spaces(char *str, va_list args, int *i)
{
    for (int j = 0; j < (str[*i] - '0') - my_nbrlen(va_arg(args, int)); j++) {
        my_putchar(' ');
    }
}

void print_sign(int nb)
{
    if (nb >= 0)
        my_putchar('+');
    else
        my_putchar('-');
}

void print_ss(char *str)
{
    int n = 0;

    while (str[n] != '\0') {
        if (str[n] > 32 && str[n] < 127) {
            my_putchar(str[n]);
            n++;
        } else {
            my_putchar(92);
            my_put_nbr(int_to_octal(str[n]));
            n++;
        }
    }
}

void print_pointer(long long nb)
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
    my_putstr("0x");
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(nb_hexa[j]);
    }
}
