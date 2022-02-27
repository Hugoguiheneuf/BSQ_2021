/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** printf
*/

#include "my.h"
#include <stdarg.h>

void my_printf(char *str, ...)
{
    va_list args;

    va_start(args, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            check(str, args, &i);
        } else {
            my_putchar(str[i]);
        }
    }
    va_end(args);
}
