/*
** EPITECH PROJECT, 2022
** 
** File description:
** 
*/

#include <criterion/criterion.h>
char *my_strcat(char *dest, char const *src);
Test (my_strcat , teststrcat)
{
    char i[] = "Hello";
    char *test = my_strcat(i, "World");
    cr_assert_str_eq(test, "HelloWorld");
}
