/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** array_2_int.c
*/

#include "../includes/bsq.h"

int **convert_to_int(bsq_t *bs)
{
    int **array = malloc(sizeof(int *) * bs->lines);
    if (array == NULL)
        return NULL;
    for (int i = 0; i < bs->lines; i++) {
        array[i] = malloc(sizeof(int) * bs->col);
        if (array[i] == NULL)
            return NULL;
    }
    return array;
}

int **str_to_int(bsq_t *bs, char **nummap)
{
    int **arr = convert_to_int(bs);
    for (int i = 0; i < bs->lines; i++)
        for (int j = 0; j < bs->col; j++)
            arr[i][j] = nummap[i][j] - 48;
    return arr;
}
