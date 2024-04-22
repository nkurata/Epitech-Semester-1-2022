/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd02-noe.kurata
** File description:
** my_strncmp.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*int my_strlength(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
if (n < my_strlength(s1))
        n = my_strlength(s1);
    if (n > my_strlength(s2))
        n = my_strlength(s2);*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    printf("%s\n",s1);
    printf("%s\n",s2);
    for (int i = 0; i < n; i++) {
        if (s1[i] < s2[i])
            return -1;
        if (s1[i] > s2[i])
            return 1;
    }
    return 0;
}

int main(int ac, char **av){

    int n = atoi(av[3]);
    printf("%d\n", my_strncmp(av[1], av[2], n));
    // printf("%d\n", my_strlength("marvin"));
    //printf("%d\n", my_strncmp("marvin", "marvin", 10));
}
