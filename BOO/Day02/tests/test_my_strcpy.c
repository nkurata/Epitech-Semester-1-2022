/*
** EPITECH PROJECT, 2022
** B-BOO-101-PAR-1-1-phoenixd02-noe.kurata
** File description:
** my_strcpy.c
*/

//gcc my_strcpy.c tests/my_strcpy.c --coverage -L/opt/homebrew/lib/ -lcriterion

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, copy_in_empty_array)
{
    char dest[6] = {0};
    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello");
}