/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd01-noe.kurata
** File description:
** recursive_power.c
*/

int recursive_power(int nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    else
        return nb * recursive_power(nb, p - 1);
}
