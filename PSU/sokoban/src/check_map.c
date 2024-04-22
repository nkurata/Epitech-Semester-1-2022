/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-sokoban-noe.kurata
** File description:
** check_map.c
*/

#include "../include/sokoban.h"

int boxed(char **arr, int x, int y)
{
    int b = 0;

    if (arr[y][x + 1] == '#' && arr[y - 1][x] == '#')
        b++;
    if (arr[y][x + 1] == '#' && arr[y + 1][x] == '#')
        b++;
    if (arr[y][x - 1] == '#' && arr[y - 1][x] == '#')
        b++;
    if (arr[y][x - 1] == '#' && arr[y + 1][x] == '#')
        b++;
    return b;
}

int check_map(soko_t *sok)
{
    int x = 0;
    int o = 0;
    int p = 0;
    for (int i = 0; sok->buffer[i]; i++) {
        switch (sok->buffer[i]) {
            case 'X': x++; break;
            case 'O': o++; break;
            case 'P': p++; break;
            default:
                if (sok->buffer[i] != '#' && sok->buffer[i] != ' '
    && sok->buffer[i] != '\n') {
                    return 84;
                }
        }
    }
    if (x < o || x == 0 || o == 0 || p != 1) {
        return 84;
    }
    return 0;
}
