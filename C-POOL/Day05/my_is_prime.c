/*
** EPITECH PROJECT, 2022
** prime
** File description:
** prime
*/
int my_is_prime(int nb)
{
    if (nb == 2 || nb == 3) {
        return 1;
    }
    if (nb <= 1) {
        return 0;
    }
    for (int x = 2; x < nb; x++) {
        if (nb % x == 0) {
                return 0;
        }
    }
    return 1;
}
