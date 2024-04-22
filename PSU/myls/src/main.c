/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-myls-noe.kurata
** File description:
** my_ls.c
*/

#include "../include/my.h"

void no_flags(struct dirent *file)
{
    if (file->d_name[0] != '.') {
        my_printf("%s\n", file->d_name);
    }
}

int my_ls(int ac, char **av)
{
    if (ac >= 1) {
        if (ls_flags(ac, av) == 84)
            return 84;
        return 0;
    }
    return 0
}

int main(int ac, char **av)
{
    if (my_ls(ac, av) == 84)
        return 84;
    return 0;
}
