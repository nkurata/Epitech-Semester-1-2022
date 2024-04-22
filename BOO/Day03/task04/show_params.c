/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd03-noe.kurata
** File description:
** show_params.c
*/

#include "../includes/phoenix.h"

void show_params(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        show_string(argv[i]);
        my_putchar('\n');
    }
}

int main(int argc, char **argv)
{
    show_params(argc, argv);
    return 0;
}
