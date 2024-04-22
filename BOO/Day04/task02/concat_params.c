/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd04-noe.kurata
** File description:
** concat_params.c
*/

#include "../includes/phoenix.h"

char *concat_parameters(int ac, char **av)
{
    int buffersize = 0;
    int j;
    for (int k = 1; k < ac; k++)
        buffersize += my_strlength(av[k]) + 1;
    char *buffer = malloc(buffersize + 1);
    for (int i = 0; i < ac; i++) {
       for (j = 0; j < my_strlength(av[i]); j++)
            buffer[i + j] = av[i][j];
        buffer[i + j] = '\n';
        }
    buffer[buffersize + 1] = '\0';
    return buffer;
}
