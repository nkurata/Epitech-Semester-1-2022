/*
** EPITECH PROJECT, 2022
** bootcamp
** File description:
** task01.c
*/

int show_alphabet(void)
{
    for (int i = 'a'; i <= 'z'; i++)
        write(1, &i, 1);
    return 0;
}
