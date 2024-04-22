/*
** EPITECH PROJECT, 2022
** test
** File description:
** 
*/
#include <criterion/criterion.h>
char *my_strdup (char const *src);
Test (my_strdup , teststrdup)
{
    char *test = my_strdup("HelloWorld");
    cr_assert_str_eq(test, "HelloWorld");
}
