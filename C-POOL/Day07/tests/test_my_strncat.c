/*
** EPITECH PROJECT, 2022
** str
** File description:
** str
*/

#include <criterion/criterion.h>
char *my_strncat(char *dest, char const *src, int nb);
Test (my_strncat , teststrcat)
{
    char i[] = "Hello";
    char *test = my_strncat(i, "World", 3);
    cr_assert_str_eq(test, "HelloWor");
}
