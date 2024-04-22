/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd02-noe.kurata
** File description:
** my_strupcase.c
*/

#include <stdio.h>

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    return str;
}
