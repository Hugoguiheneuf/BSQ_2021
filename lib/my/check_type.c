/*
** EPITECH PROJECT, 2021
** check_type.c
** File description:
** check_type in printf function
*/

#include "my.h"
#include <stdarg.h>

int check_type(char *str, va_list args, int *i)
{
    if (str[*i] == 'i' || str[*i] == 'd')
        my_put_nbr(va_arg(args, int));
    if (str[*i] == 'c')
        my_putchar(va_arg(args, int));
    if (str[*i] == 's')
        my_putstr(va_arg(args, char *));
    if (str[*i] == 'o')
        my_put_nbr(int_to_octal(va_arg(args, int)));
    if (str[*i] == 'u')
        my_put_nbr(signed_int_to_unsigned(va_arg(args, int)));
    if (str[*i] == 'p')
        print_pointer(va_arg(args, int));
    else
        check_type_bis(str, args, i);
}

int check_type_bis(char *str, va_list args, int *i)
{
    if (str[*i] == 'x')
        int_to_hexa_min(va_arg(args, int));
    if (str[*i] == 'X')
        int_to_hexa_maj(va_arg(args, int));
    if (str[*i] == '%')
        my_putchar('%');
    if (str[*i] == 'b')
        int_to_binary(va_arg(args, int));
    if (str[*i] == 'S')
        print_ss(va_arg(args, char *));
}

int check(char *str, va_list args, int *i)
{
    if (str[*i] == 'i' || str[*i] == 'd' || str[*i] == 'c'\
    || str[*i] == 's' || str[*i] == 'o' || str[*i] == 'u'\
    || str[*i] == 'p' || str[*i] == 'x' || str[*i] == 'X'\
    || str[*i] == '%' || str[*i] == 'b' || str[*i] == 'S') {
        check_type(str, args, i);
    } else if (str[*i] == '+' || str[*i] == '#' || str[*i] == ' ') {
        check_format(str, args, i);
    } else {
        (*i)++;
        check(str, args, i);
    }
}
