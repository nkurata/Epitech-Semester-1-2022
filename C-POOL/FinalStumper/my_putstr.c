/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** put a string of char
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
