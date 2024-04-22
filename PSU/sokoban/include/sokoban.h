/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-sokoban-noe.kurata
** File description:
** my.h
*/

#ifndef SOKO_H_
    #define SOKO_H_

    #include <curses.h>
    #include <ncurses.h>
    #include <string.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stddef.h>
    #include <stdint.h>
    #include <inttypes.h>
    #include "../print/include/my_printf.h"

typedef struct soko_s {
    char *buffer;
    char **empty;
    char **map;
    int y;
    int savey;
    int x;
    int savex;
} soko_t ;

void display_map(soko_t *sok);
int count_lines(char *str);
int count_col(char *str);
char **convert_to_array(int col, int lines);
char **str_to_array(char *str);
int structure(soko_t *sok);
void hide_el(soko_t *sok);
void change_el(soko_t *sok, int j, int i);
int check_dub(soko_t *sok);
int check_loss(char **arr);
int boxed(char **arr, int x, int y);
int check_map(soko_t *sok);
void move_right(soko_t *sok);
void move_left(soko_t *sok);
void move_up(soko_t *sok);
void move_down(soko_t *sok);
void movement(soko_t *sok, int key);
int game_loop(soko_t *sok);

#endif /* !SOKO_H_ */
