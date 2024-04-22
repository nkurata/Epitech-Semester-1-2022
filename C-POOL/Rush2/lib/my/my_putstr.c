/*
** EPITECH PROJECT, 2022
** my putstr
** File description:
** displays the characters of a string 1 by 1
*/
int my_putstr(const char *str)
{
    int counter = 0;
    while (str[counter] != '\0') {
        my_putchar(str[counter]);
        counter++;
    }
}
