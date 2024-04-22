/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd04-noe.kurata
** File description:
** main.c
*/

#include <stdlib.h>
#include "../includes/phoenix.h"

int main(int ac, char **av)
{
    char *str = concat_parameters(ac, av);
    show_string(str);
    free (str);
    return EXIT_SUCCESS;
}