/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd03-noe.kurata
** File description:
** concat_strings.c
*/

#include "includes/phoenix.h"

char *concat_strings(char *dest, char const *src)
{
    int len = my_strlength(dest);
    for (int i = 0; src[i] != '\0'; i++)
        dest[i + len] = src[i];
    return dest;
}
