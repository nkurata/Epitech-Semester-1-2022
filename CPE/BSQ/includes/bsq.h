/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** my.h
*/

#ifndef BSQ_H_
    #define BSQ_H_
    #include "../print/include/my_printf.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>

typedef struct bsq_s {
    int x;
    int y;
    int size;
    int lines;
    int col;
    int k;
} bsq_t;

int countcolumns(char *map);
int bsq(char *basemap, char **arraymap, char **nummap);
int err_buff(char *file);
int skipfirstline(char const *file);
char *rm_line1(char *file);
char **str_to_num(bsq_t *bs, char **arraymap);
char **convert_to_num(bsq_t *bs);
int **str_to_int(bsq_t *bs, char **nummap);
int **convert_to_int(bsq_t *bs);
int **algorithm(bsq_t *bs, int **array);
void get_square(bsq_t *bs, int **array, char **arraymap);
void my_print_map(bsq_t *bs, char **map);
char *generate_line(int map_size, char* file, bsq_t *bs);
char **str_to_array(bsq_t *bs, char *str);
char **convert_to_array(int col, int lines);
char **generate_map(int map_size, char* file, bsq_t *bs);
void generated_bsq(char *basemap, int mapsize, char **nummap, char **arraymap);
int err_ac_3(char const *file);
int count_lines(char *str);
int launch_bsq1(char **av);
int launch_bsq2(char **av);
int check_str(char const *file);

#endif /* !BSQ_H_ */
