/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** launch_bsq.c
*/

#include "../includes/bsq.h"

int bsq(char *basemap, char **arraymap, char **nummap)
{
    bsq_t bs = {0};
    char *map;
    int **intmap;

    if (!err_buff(basemap))
        return 84;
    bs.lines = to_number(basemap);
    map = rm_line1(basemap);
    bs.col = countcolumns(map);
    arraymap = str_to_array(&bs, map);
    nummap = str_to_num(&bs, arraymap);
    intmap = str_to_int(&bs, nummap);
    intmap = algorithm(&bs, intmap);
    get_square(&bs, intmap, arraymap);
    my_print_map(&bs, arraymap);
    free(intmap);
    free(map);
    free(arraymap);
    free(nummap);
    return 0;
}

void generated_bsq(char *basemap, int mapsize, char **nummap, char **arraymap)
{
    bsq_t bs = {0};
    int **intmap;

    bs.col = mapsize;
    bs.lines = mapsize;
    arraymap = generate_map(mapsize, basemap, &bs);
    nummap = str_to_num(&bs, arraymap);
    intmap = str_to_int(&bs, nummap);
    intmap = algorithm(&bs, intmap);
    get_square(&bs, intmap, arraymap);
    my_print_map(&bs, arraymap);
    free(intmap);
    free(arraymap);
    free(nummap);
}

int launch_bsq1(char **av)
{
    char **arraymap = NULL;
    char **nummap = NULL;
    char *basemap;

    if (av[1] == NULL)
        return 0;
    if ((basemap = openfile(av[1])) == NULL)
        return 84;
    if (bsq(basemap, arraymap, nummap) == 84)
        return 84;
    return 0;
}

int launch_bsq2(char **av)
{
    char **arraymap = NULL;
    char **nummap = NULL;
    char *basemap;

    int mapsize = to_number(av[1]);
    basemap = av[2];
    if (err_ac_3(basemap))
        generated_bsq(basemap, mapsize, nummap, arraymap);
    else
        return 84;
    return 0;
}
