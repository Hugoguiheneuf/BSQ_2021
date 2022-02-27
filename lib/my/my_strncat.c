/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** concatenates n char of s1 at end of s2
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i;
    int lendest = my_strlen(dest);

    for (i = 0;((i < nb) && (src[i] != '\0')); i++) {
        dest[lendest + i] = src[i];
    }
    dest[lendest + i] = '\0';
    return (dest);
}
