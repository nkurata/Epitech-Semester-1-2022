/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-2-navy-noe.kurata
** File description:
** include
*/

#ifndef NAVY_H_
    #define NAVY_H_
    #include <unistd.h>
    #include <stdio.h>
    #include "../printf/include/my_printf.h"

#define P1 0;
#define P2 1;

typedef struct {
    char **mp1;
    char **mp2;
    int w;
    int l;
}   map_t;

int helper(char *av);

#endif
