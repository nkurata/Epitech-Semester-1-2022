/*
** EPITECH PROJECT, 2022
** comb2
** File description:
** ouz
*/
int printnum(int n)
{
    char n1 = (n / 10);
    char n2 = (n % 10);
    my_putchar(n1 + 48);
    my_putchar(n2 + 48);
}

int finish(int c, int d)
{
    if (c != 99 || d != 98) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb2(void)
{
    int a = 0;
    int b = 1;
    while (a < 99) {
        b = a + 1;
        while (b < 100) {
            printnum(a);
            my_putchar(' ');
            printnum(b);
            finish(b, a);
            b++;
        }
        a++;
    }
}
