/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** generate_map.c
*/

#include "../includes/bsq.h"

char *generate_line(int map_size, char* file, bsq_t *bs)
{
    int len_str = my_strlength(file);
    char *line = malloc(sizeof(char) * map_size);

    if (line == NULL)
        return NULL;
    for (int i = 0; i < map_size; i++) {
        if (bs->k == len_str)
            bs->k = 0;
        line[i] = file[bs->k];
        bs->k++;
    }
    return line;
}

char **generate_map(int map_size, char* file, bsq_t *bs)
{
    char **arr = malloc(sizeof(char*) * map_size);
    bs->k = 0;
    for (int i = 0; i < map_size; i++) {
        arr[i] = generate_line(map_size, file, bs);
    }
    return arr;
}
