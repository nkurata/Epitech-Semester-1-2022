/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-2-sokoban-noe.kurata
** File description:
** my_sokoban.c
*/

#include "../include/sokoban.h"

void help(void)
{
    write(1, "USAGE\n\t./my_sokoban map\n", 25);
    write(1, "DESCRIPTION\n\tmap file representing the warehouse map,", 54);
    write(1, "containing '#' for walls,\n\t", 28);
    write(1, "'P' for the player, 'X' for boxes", 34);
    write(1, " and '0' for storage locations.\n", 33);
}

int main(int argc, char **argv)
{
    soko_t sok;

    if (argc != 2)
        return 84;
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        help();
        return 0;
    }
    sok.buffer = openfile(argv[1]);
    structure(&sok);
    check_map(&sok);
    initscr();
    noecho();
    clear();
    game_loop(&sok);
    return 0;
}
