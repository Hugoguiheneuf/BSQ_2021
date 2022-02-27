/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** reverses a string
*/

int my_strlen(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        n++;
    }
    return (n);
}

char *my_revstr(char *str)
{
    char a;
    int fchar = 0;
    int lchar = (my_strlen(str) - 1);

    while (fchar < lchar) {
        a = str[fchar];
        str[fchar] = str[lchar];
        str[lchar] = a;
        fchar++;
        lchar--;
    }
    return (str);
}
