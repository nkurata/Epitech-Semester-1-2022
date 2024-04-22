/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** str_2_arr.c
*/

#include "../includes/bsq.h"

char **convert_to_array(int col, int lines)
{
    char **array = malloc(sizeof(char *) * (lines + 1));
    if (array == NULL)
        return NULL;
    for (int i = 0; i < lines; i++) {
        array[i] = malloc(sizeof(char) * (col + 1));
        if (array[i] == NULL)
            return NULL;
    }
    return array;
}

char **str_to_array(bsq_t *bs, char *str)
{
    char **arr = convert_to_array(bs->col, bs->lines);
    int k = 0;
    for (int i = 0; i < bs->lines; i++) {
        for (int j = 0; j < bs->col; j++) {
            arr[i][j] = str[k];
            k++;
        }
        k++;
    }
    return arr;
}
