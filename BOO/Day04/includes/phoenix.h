/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd03-noe.kurata
** File description:
** my.h
*/

#ifndef PHOENIX_H_
    #define PHOENIX_H_
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdlib.h>

void my_putchar(char c);
int show_number(int nb);
int show_string(char const *str);
char *reverse_string(char *str);
int to_number(char const *str);
int is_prime_number(int nb);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strlength(const char *str);
void display_limits(int nb);
char *concat_parameters(int ac, char **av);


#endif
