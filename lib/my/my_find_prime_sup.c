/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** returns smallest prime number that is greater, or equal to the number given as parameter
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int nbgrt = nb;

    if (my_is_prime(nb) == 1) {
        return (nb);
    } else {
        while (my_is_prime(nbgrt) != 1) {
            nbgrt++;
        }
        return (nbgrt);
    }
}
