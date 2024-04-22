/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** errorhandling.c
*/

#include "../includes/bsq.h"

int check_str(char const *file)
{
    for (int i = skipfirstline(file); file[i] != '\0'; i++) {
        if (file[i] != '.' && file[i] != 'o'
            && file[i] != '\n' && file[i] != 'x')
            return 1;
    }
    return 0;
}

char *checklines(char *file)
{
    int c;
    for (c = 0; file[c] != '\n'; c++);
    char *str = malloc(sizeof(char) * (c + 1));
    for (int i = 0; file[i] != '\n'; i++) {
        str[i] = file[i];
    }
    str[c] = '\0';
    return str;
}

int err_buff(char *file)
{
    int i = 0;
    char *str = checklines(file);

    if (file == NULL)
        return 0;
    if (file[0] > '9' || file[0] < '0')
        return 0;
    if (to_number(str) == 0)
        return 0;
    if (to_number(str) != count_lines(file))
        return 0;
    if (check_str(file))
        return 0;
    while (file[i] != '\n') {
        if (file[i] <= '9' && file[i] >= '0')
            i++;
        else
            return 0;
    }
    return 1;
}

int err_ac_3(char const *file)
{
    for (int i = 0; file[i] != '\0'; i++) {
        if (file[i] != '.' && file[i] != 'o'
            && file[i] != '\n' && file[i] != 'x')
            return 0;
    }
    return 1;
}
