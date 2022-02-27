/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** copies a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
