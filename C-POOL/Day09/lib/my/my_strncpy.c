/*
** EPITECH PROJECT, 2022
** strncpy
** File description:
** strncpy
*/

char *my_strncpy (char *dest, char const *src, int n)
{
    for (int i = 0; src[i] != '\n' && i < n; ++i) {
        dest[i] = src[i];
    }
    return dest;
}
