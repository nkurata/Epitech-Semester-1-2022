/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-2-sokkoban-noe.kurata
** File description:
** movement.c
*/

#include "../include/sokoban.h"

void move_right(soko_t *sok)
{
    int	y = sok->y;
    int	x = sok->x;
    if (sok->map[y][x + 1] == ' ' || sok->map[y][x + 1] == 'O') {
        sok->map[y][x] = sok->empty[y][x];
        sok->x += 1;
        x += 1;
        sok->map[y][x] = 'P';
    } else if ((sok->map[y][x + 1] == 'X' && sok->map[y][x + 2] == ' ') ||
        (sok->map[y][x + 1] == 'X' && sok->map[y][x + 2] == 'O')) {
        sok->map[y][x] = sok->empty[y][x];
        sok->x += 1;
        x += 1;
        sok->map[y][x] = 'P';
        sok->map[y][x + 1] = 'X';
    }
}

void move_left(soko_t *sok)
{
    int	y = sok->y;
    int	x = sok->x;
    if (sok->map[y][x - 1] == ' ' || sok->map[y][x - 1] == 'O') {
        sok->map[y][x] = sok->empty[y][x];
        sok->x -= 1;
        x -= 1;
        sok->map[y][x] = 'P';
    } else if ((sok->map[y][x - 1] == 'X' && sok->map[y][x - 2] == ' ') ||
        (sok->map[y][x - 1] == 'X' && sok->map[y][x - 2] == 'O')) {
        sok->map[y][x] = sok->empty[y][x];
        sok->x -= 1;
        x -= 1;
        sok->map[y][x] = 'P';
        sok->map[y][x - 1] = 'X';
    }
}

void move_up(soko_t *sok)
{
    int	y = sok->y;
    int	x = sok->x;
    if (sok->map[y - 1][x] == ' ' || sok->map[y - 1][x] == 'O') {
        sok->map[y][x] = sok->empty[y][x];
        sok->y -= 1;
        y -= 1;
        sok->map[y][x] = 'P';
    } else if ((sok->map[y - 1][x] == 'X' && sok->map[y - 2][x] == ' ') ||
        (sok->map[y - 1][x] == 'X' && sok->map[y - 2][x] == 'O')) {
        sok->map[y][x] = sok->empty[y][x];
        sok->y -= 1;
        y -= 1;
        sok->map[y][x] = 'P';
        sok->map[y - 1][x] = 'X';
    }
}

void move_down(soko_t *sok)
{
    int	y = sok->y;
    int	x = sok->x;
    if (sok->map[y + 1][x] == ' ' || sok->map[y + 1][x] == 'O') {
        sok->map[y][x] = sok->empty[y][x];
        sok->y += 1;
        y += 1;
        sok->map[y][x] = 'P';
    } else if ((sok->map[y + 1][x] == 'X' && sok->map[y + 2][x] == ' ') ||
        (sok->map[y + 1][x] == 'X' && sok->map[y + 2][x] == 'O')) {
        sok->map[y][x] = sok->empty[y][x];
        sok->y += 1;
        y += 1;
        sok->map[y][x] = 'P';
        sok->map[y + 1][x] = 'X';
        }
}

void movement(soko_t *sok, int key)
{
    switch (key) {
        case 67: if (sok->map[sok->y][sok->x + 1] != '#')
                move_right(sok);
            break;
        case 68: if (sok->map[sok->y][sok->x - 1] != '#')
                move_left(sok);
            break;
        case 65: if (sok->map[sok->y - 1][sok->x] != '#')
                move_up(sok);
            break;
        case 66:
            if (sok->map[sok->y + 1][sok->x] != '#')
                move_down(sok);
            break;
        case 32: sok->map = str_to_array(sok->buffer); sok->y = sok->savey;
            sok->x = sok->savex; break;
    }
}
