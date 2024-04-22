/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** count_columns.c
*/

#include "../includes/bsq.h"

int countcolumns(char *map)
{
    int i = 0;
    int j = 0;
    while (map[i] != '\n' && map[i] != '\0') {
        i++;
        j++;
    }
    return j;
}
