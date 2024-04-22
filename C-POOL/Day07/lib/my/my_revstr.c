/*
** EPITECH PROJECT, 2022
** revstr
** File description:
** revstr
*/
int my_strlen(char const *str)
{
    int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return counter;
}

char *my_revstr(char *str)
{
    int temp;
    int end = my_strlen(str);
    for (int i = 1; i <= end; i++) {
        temp = str[i];
        str[i] = str[end - i - 1];
        str[end - i - 1] = temp;
    }
    return (str);
}
