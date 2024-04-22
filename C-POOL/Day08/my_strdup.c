/*
** EPITECH PROJECT, 2022
** strdub
** File description:
** strdup
*/
#include <stdlib.h>
char *my_strdup(char const *src)
{
    int leng = my_strlen(src);
    char *str = malloc(leng);
    str = my_strcpy(str, src);
    str[leng] = '\0';
    return str;
}
