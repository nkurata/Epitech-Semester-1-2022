/*
** EPITECH PROJECT, 2022
** lineunique
** File description:
** unique line
*/
void my_putchar(char c);
void lineunique(int x)
{
    for (int i = 1; i <= x; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}
