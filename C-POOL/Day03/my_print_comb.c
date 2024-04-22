/*
** EPITECH PROJECT, 2022
** comb
** File description:
** tt combinaison croissante de 3chiffres
*/
int around(n1, n2, n3)
{
    while (n3 <= '9') {
        my_putchar(n1);
        my_putchar(n2);
        my_putchar(n3);
        my_putchar(',');
        my_putchar(' ');
        n3 += 1;
    }
}

int my_print_comb(void)
{
    char n1 = '0';
    while (n1 <= '6') {
        char n2 = n1 + 1;
        while (n2 <= '9') {
            char n3 = n2 + 1;
            around(n1, n2, n3);
            n2 += 1;
        }
        n1 += 1;
    }
    write(1, "789", 3);
}
