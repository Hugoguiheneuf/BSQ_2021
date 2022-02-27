/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** finds first occurence of substr in str
*/

char *mystrstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i] != to_find[j]) {
        i++;
        if (str[i] == to_find[j]) {
            i++;
            j++;
        }
    }
    return (str + i);
}
