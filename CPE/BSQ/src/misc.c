/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** misc.c
*/

#include "../includes/bsq.h"

void my_print_map(bsq_t *bs, char **map)
{
    for (int i = 0; i < bs->lines; i++) {
        my_printf("%s\n", map[i]);
    }
}

int count_lines(char *str)
{
    int lines = 0;

    for (int i = skipfirstline(str); str[i] != '\0'; i++) {
        if (str[i] == '\n')
            lines++;
    }
    return lines;
}

int skipfirstline(char const *file)
{
    int i = 0;
    while (file[i] != '\n' && file[i] != '\0')
        i++;
    return i + 1;
}

char *rm_line1(char *file)
{
    int i = skipfirstline(file);
    int j = 0;
    int len = my_strlength(file);
    char *newfile = malloc(sizeof(char) * (len - i + 1));
    if (newfile == NULL)
        return NULL;
    while (i < len) {
        newfile[j] = file[i];
        i++;
        j++;
    }
    newfile[j] = '\0';
    return newfile;
}
