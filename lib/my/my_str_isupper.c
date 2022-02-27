/*
** EPITECH PROJECT, 2021
** my_str_isupper.c
** File description:
** returns 1 if contains uppercase only
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 'A') || (str[i] > 'Z'))
            return (0);
    }
    return (1);
}
