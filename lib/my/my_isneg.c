/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** displays N for negative int and P for positive and nulle
*/

void my_putchar(char c);

int my_isneg(int n)
{
    int returned_value = n;

    if (returned_value < 0)
        my_putchar('N');
    else
        my_putchar('P');
}
