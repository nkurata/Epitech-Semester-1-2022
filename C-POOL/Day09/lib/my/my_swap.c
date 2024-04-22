/*
** EPITECH PROJECT, 2022
** my swap
** File description:
** swaps 2 ints
*/
int my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
