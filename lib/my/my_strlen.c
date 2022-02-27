/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** count and return number of char found in the string
*/

int my_strlen(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        n++;
    }
    return (n);
}
