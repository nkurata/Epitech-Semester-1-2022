/*
** EPITECH PROJECT, 2022
** B-CPE-110-PAR-1-2-BSQ-noe.kurata
** File description:
** bsq.c
*/

#include "../includes/bsq.h"

int main(int ac, char **av)
{
    if (ac < 2 || ac > 3)
        return 84;
    if (ac == 2) {
        if (launch_bsq1(av) == 84)
            return 84;
    } if (ac == 3) {
        if (launch_bsq2(av) == 84)
            return 84;
    }
    return 0;
}
