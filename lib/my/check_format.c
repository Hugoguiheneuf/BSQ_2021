/*
** EPITECH PROJECT, 2021
** check_format.c
** File description:
** checks formats for every flags
*/

#include "my.h"
#include <stdarg.h>

void format_hash(char *str, va_list args, int *i)
{
    if (str[*i] == 'o')
        my_putchar('0');
    if (str[*i] == 'x')
        my_putstr("0x");
    if (str[*i] == 'X')
        my_putstr("0X");
    (*i)--;
}

int check_format(char *str, va_list args, int *i)
{
    if (str[*i] == ' ') {
        my_putchar(' ');
        (*i)++;
        check(str, args, i);
    }
    if (str[*i] == '+') {
        print_sign(va_arg(args, int));
        (*i)++;
        check(str, args, i);
    }
    if (str[*i] == '#') {
        (*i)++;
        format_hash(str, args, i);
        (*i)++;
        check(str, args, i);
    } else
        check_format_bis(str, args, i);
}

int check_format_bis(char *str, va_list args, int *i)
{
    if (str[*i] >= '0' && str[*i] <= '9') {
        print_spaces(str, args, i);
        (*i)++;
        check(str, args, i);
    }
    if (str[*i] == '-')
        ;
    if (str[*i] == '0')
        ;
}
