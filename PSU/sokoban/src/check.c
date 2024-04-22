/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-2-sokoban-noe.kurata
** File description:
** check.c
*/

#include "../include/sokoban.h"

int check_stuck(char **arr, int y, int x, int c)
{
    if (arr[y][x] == 'X' && boxed(arr, x, y) >= 1)
        c++;
    return c;
}

int checked_x(char **arr, int y, int x, int n)
{
    if (arr[y][x] == 'X')
        n++;
    return n;
}

int check_loss(char **arr)
{
    int n = 0;
    int c = 0;

    for (int y = 0; arr[y] != NULL; y++)
        for (int x = 0; arr[y][x] ; x++)
            n = checked_x(arr, y, x, n);
    for (int y = 1; arr[y] != NULL; y++)
        for (int x = 0; arr[y][x] ; x++)
            c = check_stuck(arr, y, x, c);
    if (n == c)
        return 0;
    return 84;
}

int check_dub(soko_t *sok)
{
    int check = 0;
    for (int y = 0; sok->empty[y] != NULL; y++) {
        for (int x = 0; sok->empty[y][x]; x++) {
            sok->map[y][x] == 'O' ? check += 1 : check;
    }
    }
    if (sok->empty[sok->y][sok->x] == 'O') {
        check = 1;
    }
    return check;
}
