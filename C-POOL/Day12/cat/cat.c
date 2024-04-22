/*
** EPITECH PROJECT, 2022
** cat
** File description:
** cat
*/
#include <fcntl.h>
#include "../include/mylist.h"
#include <unistd.h>
int main(int argc, char *argv[])
{
    int fd;
    int buff[32000];
    int bts_read;
    for (int i = 1; i < argc; i++) {
        fd = open(argv[i], O_RDONLY);
    } if (fd == -1) {
        return 0;
    }
    while (bts_read = read(fd, buff, 32000)) {
            write(1, buff, bts_read);
        }
    close(fd);
    return 0;
}
