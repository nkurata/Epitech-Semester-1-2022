/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** chars_to_ints.c
*/

#include "../includes/bsq.h"

char **convert_to_num(bsq_t *bs)
{
    char **array = malloc(sizeof(char *) * bs->lines);
    if (array == NULL)
        return NULL;
    for (int i = 0; i < bs->lines; i++) {
        array[i] = malloc(sizeof(char) * bs->col);
        if (array[i] == NULL)
            return NULL;
    }
    return array;
}

char **conversion_to_num(char **arr, int i, int j)
{
    if (arr[i][j] == '.')
        arr[i][j] = '1';
    else if (arr[i][j] == 'o')
        arr[i][j] = '0';
    return arr;
}

char **str_to_num(bsq_t *bs, char **arraymap)
{
    char **arr = convert_to_num(bs);
    for (int i = 0; i < bs->lines; i++) {
        for (int j = 0; j < bs->col; j++) {
            arr[i][j] = arraymap[i][j];
            arr = conversion_to_num(arr, i, j);
        }
    }
    return arr;
}
