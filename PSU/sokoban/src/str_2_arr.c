/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** str_2_arr.c
*/

#include "../include/sokoban.h"

int count_lines(char *str)
{
    int lines = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            lines++;
    }
    return lines + 1;
}

int count_col(char *str)
{
    int col = 0;

    for (int i = 0; str[i] != '\n'; i++)
        col++;
    return col;
}

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

char **str_to_array(char *str)
{
    int col = count_col(str);
    int lines = count_lines(str);
    char **arr = convert_to_array(col, lines);
    int k = 0;

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = str[k];
            k++;
        }
        k++;
    }
    return arr;
}
