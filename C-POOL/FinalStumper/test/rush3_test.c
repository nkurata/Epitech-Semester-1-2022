/*
** EPITECH PROJECT, 2022
** test
** File description:
** test
*/

#include <criterion/criterion.h>
int rush3 (char *buff);

Test( rush3, rush3test1) {
    char *buff = "o--o\n|  |\n|  |\no--o\n\0";
    int i = rush3(buff);
    cr_assert_eq(i, 0);
}
Test( rush3, rush3test2) {
    char *buff = "//**\\\n*  *\n*  *\n\\**//\n\0";
    int i = rush3(buff);
    cr_assert_eq(i, 0);
}
Test( rush3, rush3test3) {
    char *buff = "ABBA\nB  B\nB  B\nCBBC\n\0";
    int i = rush3(buff);
    cr_assert_eq(i, 0);
}
Test( rush3, rush3test4) {
    char *buff = "ABBC\nB  B\nB  B\nABBC\n\0";
    int i = rush3(buff);
    cr_assert_eq(i, 0);
}
Test( rush3, rush3test5) {
    char *buff = "ABBC\nB  B\nB  B\nCBBA\n\0";
    int i = rush3(buff);
    cr_assert_eq(i, 0);
}
Test( rush3, rush3testnone) {
    char *buff = "kBBC\nB  B\nB  B\nABBC\n\0";
    int i = rush3(buff);
    cr_assert_eq(i, 0);
}
Test( rush3, rush3tests) {
    char *buff = "B\n\0";
    int i = rush3(buff);
    cr_assert_eq(i, 0);
}
Test( my_putnbr, oue) {
    int i = my_putnbr(2147483647);
    cr_assert_eq(i, 0);
}

Test( my_putnbr, oue2) {
    int i = my_putnbr(-2147483647);
    cr_assert_eq(i, 0);
}
