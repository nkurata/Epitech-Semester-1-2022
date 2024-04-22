/*
** EPITECH PROJECT, 2022
** bootcamp
** File description:
** task02.c
*/

#include <unistd.h>

void display(char a, char b)
{
    for (char c = b + 1; c <= '9'; c += 1) {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                write(1, ", ", 2);
            }
}

int show_combinations(void)
{
    for (char a = '0' ; a <= '6'; a += 1) {
        for (char b = a + 1; b <= '8'; b += 1) {
            display(a,b);
        }
    }
    write (1, "789\n", 4);
    return 0;
}
