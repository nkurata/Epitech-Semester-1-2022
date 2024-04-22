/*
** EPITECH PROJECT, 2022
** square
** File description:
** square
*/
int my_compute_square_root(int nb)
{
    int a = 0;
    if (nb == 0 || nb < 0) {
        return 0;
    }
    while (a < nb) {
        a++;
        if (a * a == nb) {
            return 0;
        }
    }
    return 0;
}
