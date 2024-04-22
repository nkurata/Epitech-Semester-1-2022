/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd04-noe.kurata
** File description:
** test.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char** argv) {
    int buffer_size = 0;
    for (int i = 1; i < argc; i++)
        buffer_size += strlen(argv[i]) + 1;
    char* buffer = malloc(buffer_size + 1);
    int offset = 0;
    for (int i = 1; i < argc; i++)
        offset += sprintf(buffer + offset, "%s\n", argv[i]);
    write(1, buffer, buffer_size);
    free(buffer);
    return 0;
}