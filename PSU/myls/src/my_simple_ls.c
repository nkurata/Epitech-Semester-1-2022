/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-2-myls-noe.kurata
** File description:
** my_simple_ls.c
*/

#include "../include/my.h"

/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** simple ls
*/

#include "../include/my.h"

void display_content(DIR *dir)
{
    struct dirent *read;

    while ((read = readdir(dir)) != 0)
        if (read->d_name[0] != '.') {
            show_string(read->d_name);
            my_putchar('\n');
        }
}

void display_dir(int ac, char *name)
{
    DIR *dir = opendir(name);

    if (ac >= 3)
        show_string("./:\n");
    display_content(dir);
    closedir(dir);
}

int multiple_ls_current(char **av, int i, int ac)
{
    if (my_strlength(av[i]) == 2 && av[i][0] == '.' && av[i][1] == '/') {
        display_dir(ac, "./");
        i++;
        if (i != ac)
            my_putchar('\n');
        else
            return (0);
    }
    return (i);
}

int multiple_ls(int ac, char **av)
{
    DIR *dir;

    if (ac == 2) {
        display_dir(ac, av[1]);
        return 0;
    }
    for (int i = 1; i != ac; i++) {
        i = multiple_ls_current(av, i, ac);
        if (i == 0)
            return 0;
        dir = opendir(av[i]);
        show_string(av[i]);
        show_string(":\n");
        display_content(dir);
        if (i != ac - 1)
            my_putchar('\n');
        closedir(dir);
    }
    return 0;
}

int my_simple_ls(int ac, char **av)
{
    int error = 0;
    DIR *dir;
    struct dirent *read;

    if (ac == 1) {
        if ((dir = opendir("./")) == NULL)
            return 84;
        while ((read = readdir(dir)) != 0)
            if (read->d_name[0] != '.') {
                show_string(read->d_name);
                my_putchar('\n');
            }
        closedir(dir);
        return (0);
    }
    error = check_if_open(ac, av);
    if (error >= 1)
        return (84);
    else
        multiple_ls(ac, av);
    return (0);
}
