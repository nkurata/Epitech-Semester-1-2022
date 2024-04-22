/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-2-myls-noe.kurata
** File description:
** ls_flags.c
*/

#include "../include/my.h"

int ls_cases(int ac, char **av)
{
    switch (av[1][1]) {
        case 'a': my_printf("%s  ", file->d_name); break;
        case 'd' : if (flag_d(ac, av) == 84) return (84); break;
        case 'r' : if (flag_r(ac, av) == 84) return (84); break;
        case 'R' : if (flag_br(ac, av) == 84) return (84); break;
        case 'l' : if (flag_l(ac, av) == 84) return (84); break;
        case 't' : if (flag_t(ac, av) == 84) return (84); break;
    }
    return (0);
}

int ls_flags(int ac, char **av)
{
    int ret = 0;

    if (ac == 1) {
        my_simple_ls(ac, av);
        return (0);
    }
    if (av[1][0] == '-') {
        ret = ls_cases(ac, av);
        return (ret);
    }
    else
    if (my_simple_ls(ac, av) == 84)
        return (84);
    return (0);
}
