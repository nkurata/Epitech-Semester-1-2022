/*
** EPITECH PROJECT, 2022
** int to bin
** File description:
** int to bin
*/

#include "../include/my_printf.h"

int int_2_bin(int nb)
{
    if (nb == 0) {
        return (0);
    }
    int_2_bin(nb / 2);
    my_putchar(nb % 2 + 48);
}
