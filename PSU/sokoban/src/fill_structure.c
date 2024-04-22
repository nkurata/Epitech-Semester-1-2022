/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-2-sokoban-noe.kurata
** File description:
** fill_structure.c
*/

#include "../include/sokoban.h"

void print_map(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
        printf("%s\n", map[i]);
}

void change_el(soko_t *sok, int j, int i)
{
    if (sok->empty[j][i] == 'P' || sok->empty[j][i] == 'X')
        sok->empty[j][i] = ' ';
}

void hide_el(soko_t *sok)
{
    int i;
    int j = 0;

    while (sok->empty[j] != NULL) {
        i = 0;
        while (sok->empty[j][i] != '\0') {
            change_el(sok, j, i);
            i++;
        }
        j++;
    }
}

int structure(soko_t *sok)
{
    int y = 0;
    int x;
    sok->y = 0;
    sok->empty = str_to_array(sok->buffer);
    sok->map = str_to_array(sok->buffer);
    while (sok->map[y] != NULL) {
        for (x = 0; sok->map[y][x] && sok->map[y][x] != 'P' ; x++);
        if (sok->map[y][x] == 'P') {
            sok->y = y;
            sok->x = x;
            break;
        }
        y++;
    }
    if (sok->y == 0 || sok->x == 0)
        return 84;
    sok->savey = sok->y;
    sok->savex = sok->x;
    hide_el(sok);
    return 0;
}
