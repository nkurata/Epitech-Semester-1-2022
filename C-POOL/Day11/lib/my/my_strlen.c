/*
** EPITECH PROJECT, 2022
** my str len
** File description:
** mesures the length of a len
*/
int my_strlen(char const *str)
{
    int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return (counter);
}
