/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** returns 1 if contains digits only
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0') || (str[i] > '9'))
            return (0);
    }
    return (1);
}
