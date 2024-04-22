/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main for final stumper
*/

#include <stdio.h>
#include <unistd.h>
#include "rush3.h"

int main(void)
{
    char buff[BUFSIZ + 1];
    int offset = 0;
    int len ;
    while ((len = read(0 , buff + offset , BUFSIZ - offset)) > 0) {
        offset = offset + len ;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84) ;
    rush3(buff) ;
    return (0) ;
}
