/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** compares n first char of s1 and s2
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int diff = 0;

    for (int i = 0; (s1[i] != '\0') && (s2[i] != '\0') && (i <= n); i++) {
        if (s1[i] > s2[i])
            diff++;
        else if (s1[i] < s2[i])
            diff--;
    }
    return (diff);
}
