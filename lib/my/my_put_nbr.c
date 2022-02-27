/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** displays number given as parameter
*/

void my_putchar(char c);
int my_put_nbr(int nb);

int my_put_neg_nb(int nb)
{
    int modulo = 0;

    my_putchar('-');
    nb = nb * (-1);
    if (nb <= 9 && nb >= 0)
        my_put_nbr(nb + '0');
    else if (nb > 9) {
        modulo = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(modulo + '0');
    }
}

int my_put_nbr(int nb)
{
    int modulo = 0;

    if (nb >= 0 && nb <= 9)
        my_putchar(nb + '0');
    else if (nb > 9) {
        modulo = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(modulo + '0');
    } else {
        my_put_neg_nb(nb);
    }
}
