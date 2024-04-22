/*
** EPITECH PROJECT, 2022
** B-CPE-101-PAR-1-5-myprintf-noe.kurata
** File description:
** str2bin.c
*/

#include "../include/my_printf.h"
#include <string.h>

char* str_2_bin(char* s)
{
    if (s == NULL)
        return s;
    size_t len = my_strlength(s);
    char *binary = malloc(sizeof(char) * len + 1);
    binary[0] = '\0';
    for (size_t i = 0; i < len; ++i) {
        char ch = s[i];
        for (int j = 7; j >= 0; --j){
            if (ch & (1 << j))
                strcat(binary, "1");
            else
                strcat(binary, "0");
        }
    }
    return binary;
}