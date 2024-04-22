/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd03-noe.kurata
** File description:
** sorted_params.c
*/

#include "../includes/phoenix.h"

char **rearranged(char **av, int i, int j)
{
    if (av[i][0] > av[j][0]) {
        char* temp = av[i];
        av[i] = av[j];
        av[j] = temp;
        }
    return av;
}

int sorted_params(int ac, char** av)
{
    if (ac < 2)
        return 84;
    for (int i = 0; i < ac - 1; i++)
        for (int j = i + 1; j < ac; j++)
            rearranged(av, i, j);
    for (int i = 0; i < ac; i++){
        show_string(av[i]);
        my_putchar('\n');
    }
    return 0;
}

int main(int ac, char **av)
{
    sorted_params(ac, av);
    return 0;
}
