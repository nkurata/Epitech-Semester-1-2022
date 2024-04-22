/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-2-sokoban-noe.kurata
** File description:
** game_loop.c
*/

#include "../include/sokoban.h"

void display_map(soko_t *sok)
{
    for (int i = 0; sok->map[i] != NULL; i++)
        mvprintw(i, 100, "%s\n", sok->map[i]);
}

int game_loop(soko_t *sok)
{
    int i = 0;
    display_map(sok);
    initscr();
    while (i != 32) {
        i = getch();
        movement(sok, i);
        display_map(sok);
        refresh();
        if (check_loss(sok->map) == 0) {
            endwin();
            my_printf("%s\n", "Try Again");
            return 1;
        } if (check_dub(sok) == 0) {
            endwin();
            my_printf("%s\n", "You Win !!");
            return 1;
        }
    }
    endwin();
    return 0;
}
