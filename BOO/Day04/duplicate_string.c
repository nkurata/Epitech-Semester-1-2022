/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd04-noe.kurata
** File description:
** duplicate_string.c
*/

#include "includes/phoenix.h"

char *duplicate_string(char const *src)
{
    int i;
    char *dest = malloc(sizeof(char) * my_strlength(src));

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

