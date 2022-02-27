/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** returns 1 if contains only printable chars
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 32) || (str[i] > 127))
            return (0);
    }
    return (1);
}
