/*
** EPITECH PROJECT, 2022
** factorial rec
** File description:
** fac rec
*/
int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb >= 13) {
        return 0;
    }
    if (nb >= 1) {
        return nb * my_compute_factorial_rec(nb - 1);
    } else {
        return 1;
    }
}
