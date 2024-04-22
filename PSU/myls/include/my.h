/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-myls-noe.kurata
** File description:
** my.h
*/


#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include <sys/types.h>
    #include <stdio.h>
    #include <dirent.h>
    #include "../my_printf/include/my_printf.h"

int ls_cases(int ac, char **av);
int my_ls(int ac, char **av);
int ls_flags(int ac, char **av);
int my_simple_ls(int ac, char **av);
void display_dir(int ac, char *name);
void display_content(DIR *dir);
int multiple_ls(int ac, char **av);
int multiple_ls_current(char **av, int i, int ac);

#endif
