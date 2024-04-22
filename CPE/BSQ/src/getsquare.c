/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** getsquare.c
*/

#include "../includes/bsq.h"

void get_square2(bsq_t *bs, int **array, int i, int j)
{
    if (bs->size < array[i][j]) {
        bs->size = array[i][j];
        bs->x = i;
        bs->y = j;
    }
}

void get_square(bsq_t *bs, int **array, char **arraymap)
{

    for (int i = 0; i < bs->lines; i++) {
        for (int j = 0; j < bs->col; j++) {
            get_square2(bs, array, i, j);
        }
    }
    for (int i = bs->x; i > bs->x - bs->size; i--) {
        for (int j = bs->y; j > bs->y - bs->size; j--) {
            arraymap[i][j] = 'x';
        }
    }
}
