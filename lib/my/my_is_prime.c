/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** returns 1 if prime, 0 if not
*/

int my_is_prime(int nb)
{
    if (nb == 2 || nb == 3)
        return (1);
    else if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
        return (0);
    for (int i = 5; (i * i) <= nb; i += 6) {
        if (nb % i == 0 || nb % (i + 2) == 0)
            return (0);
    }
    return (1);
}
