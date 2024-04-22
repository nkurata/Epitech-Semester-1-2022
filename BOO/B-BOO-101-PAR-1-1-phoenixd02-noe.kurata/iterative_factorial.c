/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd01-noe.kurata
** File description:
** iterative_factorial.c
*/

int iterative_factorial(int nb)
{
    int count = 1;
    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    for (int i = 1; i <= nb; i++)
        count = count * i;
    return count;
}
