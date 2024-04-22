/*
** EPITECH PROJECT, 2022
** power
** File description:
** power it
*/
int my_compute_power_it(int nb, int p)
{
    int a = 1;
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    for (int i = 1; i <= p; i++) {
        a = a * nb;
    }
    return a;
}
