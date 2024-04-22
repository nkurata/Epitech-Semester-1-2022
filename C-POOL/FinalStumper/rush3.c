/*
** EPITECH PROJECT, 2022
** rush3.c
** File description:
** rush 3
*/

#include "rush3.h"

void rush3_part2(char *buff, int found)
{
    if (buff[0] == 'B' && buff[1] != '\0') {
        my_putstr("[rush1-3] ");
        length_checker(buff);
        my_putstr(" || [rush1-4] ");
        length_checker(buff);
        my_putstr(" || [rush1-5] ");
        length_checker(buff);
        found = 1;
    }
    if (buff[0] == 'A') {
        type_checker(buff);
        found = 1;
    }
    if (found == 0) {
        my_putstr("none");
    }
}

int rush3 (char *buff)
{
    int found = 0;
    if (buff[0] == 'o') {
        my_putstr("[rush1-1] ");
        length_checker(buff);
        found = 1;
    }
    if (buff[0] == '*' || buff[0] == '/') {
        my_putstr("[rush1-2] ");
        length_checker(buff);
        found = 1;
    }
    rush3_part2(buff, found);
    my_putchar('\n');
    return 0;
}
