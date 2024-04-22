/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd02-noe.kurata
** File description:
** my_strcapitalize.c
*/

int checkbackspace(char *str, int i)
{
    if (str[i] == ' ')
        return 1;
    if (str[i] == '-')
        return 1;
    if (str[i] == '+')
        return 1;
    return 0;
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((checkbackspace(str, i - 1) == 1) && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        if ((checkbackspace(str, i - 1) == 0) && str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    if (str[0] > 96 && str[0] < 123)
            str[0] -= 32;
    return str;
}
