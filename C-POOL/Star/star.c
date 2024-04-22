/*
** EPITECH PROJECT, 2022
** star
** File description:
** star
*/
void ligne(unsigned int s, char c);
void firts(unsigned int s);
void top(unsigned int s, int exp);
void bot(unsigned int s, int exp);

void ligne2(unsigned int s, int esp)
{
    ligne(s, ' ');
    my_putchar('*');
    ligne(esp, ' ');
    my_putchar('*');
    my_putchar('\n');
}

void laligne(int s)
{
    ligne(2 * s + 1, '*');
    if (s == 1) {
        my_putchar(' ');
    } else {
        ligne(2 * s - 3, ' ');
    }
    ligne(2 * s + 1, '*');
    my_putchar('\n');
}

void triangle1(int s, int e)
{
    if (e == s && e != 1){
        ligne2(s, 4 * s - 3);
    } else if (e == s) {
        ligne2(s, 3);
    }  else {
        ligne(e, ' ');
        my_putchar('*');
        ligne(6 * s - 3 - 2 * e, ' ');
        my_putchar('*');
        my_putchar('\n');
        triangle1(s, e + 1);
    }
}

void triangle2(int s, int e)
{
    if (s != e) {
        triangle2(s, e + 1);
        ligne(e, ' ');
        my_putchar('*');
        ligne(6 * s - 3 - 2 * e, ' ');
        my_putchar('*');
        my_putchar('\n');
    }
}

void star(unsigned int size)
{
    top(size,1);
    laligne(size);
    triangle1(size,1);
    triangle2(size,1);
    laligne(size);
    bot(size,1);
}
