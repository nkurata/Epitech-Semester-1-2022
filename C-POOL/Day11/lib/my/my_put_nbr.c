/*
** EPITECH PROJECT, 2022
** put nbr
** File description:
** put nbr
*/
int my_put_nbr(int nb)
{
    int a = 1;
    if (nb == "-2147483647") {
        return ('0');
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
}
