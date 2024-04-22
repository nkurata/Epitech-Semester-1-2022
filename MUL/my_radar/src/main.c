/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myradar-noe.kurata
** File description:
** bsradar.c
*/

#include "../includes/radar.h"

void helper(void)
{
    show_string("Air traffic simulation panel\n\n");
    show_string("USAGE\n ./my_radar [OPTIONS] path_to_script\n");
    show_string(" path_to_script    The path to the script file.\n");
    show_string("\nOPTIONS\n -h\t\t   print the usage and quit.\n");
    show_string("\nUSER INTERACTIONS\n");
    show_string(" 'L' key\tenable/disable hitboxes and areas.\n");
    show_string(" 'S' key\tenable/disable sprites.\n");
}

int checkhelp(char *av)
{
    if (av[0] == '-' && av[1]) {
        helper();
        return 0;
    }
    return 84;
}
int main(int ac, char **av)
{
    if (ac > 2 || ac < 1) {
		show_string("./my_radar: bad arguments: ");
		show_number(ac - 1);
		show_string(" given but 1 is required\n");
		show_string("retry with -h\n");
		return 84;
    }
    if (checkhelp(av[1]) != 0)
        return 84;
}
