/*
** EPITECH PROJECT, 2022
** strcpy
** File description:
** strcpy
*/
char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }
    return dest;
}
