/*
** EPITECH PROJECT, 2022
** factorial
** File description:
** factorial
*/
int my_compute_factorial_it(int nb)
{
    int a = 1;
    if (nb < 0 || nb >= 13) {
        return 0;
    }
    for (int i = 1; i <= nb; i++) {
        a = a * i;
    }
    return (a);
}
