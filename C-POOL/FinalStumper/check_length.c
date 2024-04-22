/*
** EPITECH PROJECT, 2022
** length checker
** File description:
** length checker
*/
#include "rush3.h"

void length_checker(char *buff)
{
    int i = 0;
    int width = 0;
    int line_count = 0;
    int first_line = 1;
    while (buff[i] != '\0') {
        if (buff[i] == '\n' && first_line == 1) {
            width = i;
            first_line = 0;
        }
        if (buff[i] == '\n') {
            line_count++;
        }
        i++;
    }
    my_putnbr(width);
    my_putchar(' ');
    my_putnbr(line_count);
}

int print_type(char *buff, char LUcorner, char LDcorner)
{
    int i = 0;
    char aux;
    while (buff[i] != '\0') {
        aux = buff[i];
        if (aux == 'A' || aux == 'B' || aux == 'C'
            || aux == '\n' || aux == ' ' ){
            i++;
        } else {
            my_putstr("none");
            return 0;
        }
    } if (middlelines(buff) != 84) {
        if (LUcorner == 'A' && LDcorner == 'C')
            my_putstr("[rush1-3] ");
        if (LUcorner == 'C' && LDcorner == 'C')
            my_putstr("[rush1-4] ");
        if (LUcorner == 'C' && LDcorner == 'A')
            my_putstr("[rush1-5] ");
        return 1;
    }
}

void type_checker(char *buff)
{
    int i = 0;
    char LDcorner;
    char LUcorner;
    while (buff[i] != '\n') {
        i++;
    }
    LUcorner = buff[i - 1];
    while (buff[i] != '\0') {
        i++;
    }
    LDcorner = buff[i - 2];
    if (print_type(buff, LUcorner, LDcorner) == 1)
        length_checker(buff);
}

int middlelines(char *buff)
{
    int i = 0;
    int width = 0;
    int line_count = 0;
    int first_line = 1;
    while (buff[i] != '\0') {
        if (buff[i] == '\n' && first_line == 1) {
            width = i;
            first_line = 0;
        } if (buff[i] == '\n') {
            line_count++;
        }
        i++;
    }
    int maxmid = i - width;
    for (int c = width + 1; c < maxmid - 1; c++) {
        if (buff[c] != ' ' && buff[c] != 'B' && buff[c] != '\n') {
            my_putstr("none");
            return 84;
        }
    }
}
