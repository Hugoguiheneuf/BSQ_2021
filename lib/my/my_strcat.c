/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** concatenates two strings
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int lendest = my_strlen(dest);

    for (i = 0; src[i] != '\0'; i++) {
        dest[lendest + i] = src[i];
    }
    dest[lendest + i] = '\0';
    return (dest);
}
