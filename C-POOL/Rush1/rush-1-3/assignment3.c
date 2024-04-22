/*
** EPITECH PROJECT, 2022
** ex3
** File description:
** ex3
*/
void lineunique(int x);

void line(int x, int y)
{
    my_putchar('A');
    for (int i = 1; i <= x - 2; i++) {
        my_putchar('B');
    }
    my_putchar('A');
    my_putchar('\n');
}

void line2(int x, int y)
{
    my_putchar('C');
    for (int i = 1; i <= x - 2; i++) {
        my_putchar('B');
    }
    my_putchar('C');
    my_putchar('\n');
}

void columns(int x, int y)
{
    for (int i = 1; i <= y - 2; i++) {
        my_putchar('B');
        for (int e = 1; e <= x - 2; e++) {
            my_putchar(' ');
        }
        my_putchar('B');
        my_putchar('\n');
    }
}

void columnunique(int y)
{
    for (int i = 0; i < y; i++) {
        my_putchar('B');
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    } if (x == 1 && y == 1) {
        my_putchar('B');
        my_putchar('\n');
        return;
    } if (y == 1) {
        lineunique(x);
        return;
    } if (x == 1) {
        columnunique(y);
        return;
    }
    line(x, y);
    columns(x, y);
    line2(x, y);
    return;
}
