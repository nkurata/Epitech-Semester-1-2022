/*
** EPITECH PROJECT, 2022
** line
** File description:
** unique
*/

void my_putchar(char c);
void lineunique(int x)
{
    my_putchar('o');
    for (int i = 1; i <= x - 2; i++) {
        my_putchar('-');
    }
    my_putchar('o');
    my_putchar('\n');
}
