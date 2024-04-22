/*
** EPITECH PROJECT, 2022
** fontions for star
** File description:
** fonctions for star
*/
void ligne2(unsigned int s, int esp);
void laligne(int s);
void triangle1(int s, int e);
void triangle2(int s, int e);

void ligne(unsigned int s, char c)
{
    for (int i = 1;i <= s; i++) {
        my_putchar(c);
    }
}

void first(unsigned int s)
{
    ligne(s - 1,' ');
    my_putchar('*');
    my_putchar('\n');
}

void top(unsigned int s, int exp)
{
    if (exp == s && exp != 1) {
        first((2 * s) + exp);
    } else if (exp == s) {
        first(4);
    } else {
        top(s, exp + 1);
        ligne(2 * s + exp - 1, ' ');
        my_putchar('*');
        ligne((2 * s) - 1 - (2 * exp), ' ');
        my_putchar('*');
        my_putchar('\n');
    }
}

void bot(unsigned int s, int exp)
{
    if (exp == s && exp != 1) {
        first((2 * s) + exp);
    } else  if (exp == s) {
        first(4);
    } else {
        ligne(2 * s + exp - 1, ' ');
        my_putchar('*');
        ligne((2 * s) - 1 - (2 * exp), ' ');
        my_putchar('*');
        my_putchar('\n');
        bot(s, exp + 1);
    }
}
