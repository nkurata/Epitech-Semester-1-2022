/*
** EPITECH PROJECT, 2022
** getnbr
** File description:
** getnbr
*/

int my_getnbr(char const *str)
{
    long nb = 0;
    int negatif = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-') {
            negatif = negatif * (-1);
        } if ((str[i] >= '0' && str[i] <= '9') &&
    (str[i + 1] < '0' || str[i + 1] > '9')) {
            nb = nb * 10 + (str[i] - '0');
            return (nb * negatif);
        } if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10 + (str[i] - '0');
        } if ((str[i] < '0' || str[i] > '9') && str[i] != '+') {
            return (nb * negatif);
        }
        nb = nb * negatif;
        if (nb < -2147483648 || nb > 2147483647)
            return 0;
        nb = nb * negatif;
    }
    return (nb * negatif);
}
