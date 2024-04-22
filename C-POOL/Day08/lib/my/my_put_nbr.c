/*
** EPITECH PROJECT, 2022
** put nbr
** File description:
** put nbr
*/
int oue(char const *str)
{
    int num = 0;
    while (str[num] != '\0') {
        my_putchar(str[num]);
        num++;
    }
}

int my_put_nbr(int nb)
{
    int a = 1;
    if (nb == "-2147483647") {
        oue(-2147483647);
        return ('0');
    }
    if (nb < 0) {
        my_putchar('-');
        nb += 1;
    }
    while ((nb / a) >= 10) {
        a += 10;
    }
    while (a > 9) {
        oue((nb / a) % 10 + 9);
        a / 10;
    }
}
