/*
** EPITECH PROJECT, 2022
** put nbr
** File description:
** put nbr
*/
void my_putchar(char c);

int my_putnbr(int nb)
{
    int a = 1;
    if (nb == -2147483647) {
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    } else if (nb > 9) {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return 0;
}
