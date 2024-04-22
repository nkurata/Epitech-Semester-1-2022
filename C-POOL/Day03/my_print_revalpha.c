/*
** EPITECH PROJECT, 2022
** rev alpha
** File description:
** reverses alphabet
*/
int my_print_revalpha(void)
{
    char i = 'z';
    while (i >= 'a') {
        my_putchar(i);
        i = i - 1;
    }
}
