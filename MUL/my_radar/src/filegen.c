/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-2-myradar-noe.kurata
** File description:
** filegen.c
*/

#include "../includes/radar.h"

int count_line(char *s)
{
	int c = 0;
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] == '\n')
			c++;
	return c;
}

char **readmap(char *av)
{
    int fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return 84;
    struct stat ap;
    if (stat(av[1], &ap) == -1)
        return 84;
    int buffsize = ap.st_size;
    char *buffer = malloc(sizeof(char) * (buffsize + 1));
    if (read(fd, buffer, buffsize) <= 0)
        return 84;
    close(fd);
    buffer[ap.st_size] = '\0';
}
