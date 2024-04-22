/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** algorithm.c
*/

#include "../includes/bsq.h"


int min_value(int a, int b, int c)
{
    int min_val = a;
    if (b < min_val)
        min_val = b;
    if (c < min_val)
        min_val = c;
    return min_val;
}

int **algo_two(int **array, int i, int j)
{
    if (array[i][j] == 1) {
        if (i == 0 || j == 0)
            array[i][j] = 1;
        else {
            int a = array[i - 1][j];
            int b = array[i][j - 1];
            int c = array[i - 1][j - 1];
            int min_val = min_value(a, b, c);
            array[i][j] = min_val + 1;
        }
    }
    return array;
}

int **algorithm(bsq_t *bs, int **array)
{
    for (int i = 0; i < bs->lines; i++) {
        for (int j = 0; j < bs->col; j++) {
            array = algo_two(array, i, j);
        }
    }
    return array;
}
