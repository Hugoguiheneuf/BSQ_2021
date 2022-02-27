/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** compares two int
*/

int my_strcmp(char const *s1, char const *s2)
{
    int diff = 0;

    for (int i = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++) {
        if (s1[i] >  s2[i])
            diff++;
        else if (s1[i] < s2[i])
            diff--;
    }
    return (diff);
}
