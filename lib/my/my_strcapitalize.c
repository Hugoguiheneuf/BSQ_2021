/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** capitalize the first letter of each word
*/

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') && \
            (str[i - 1] < 'a' && str[i - 1] < 'A') || \
            (str[i - 1] > 'z' && str[i - 1] > 'Z')) {
            str[i] = (str[i] - 32);
        }
    }
}
