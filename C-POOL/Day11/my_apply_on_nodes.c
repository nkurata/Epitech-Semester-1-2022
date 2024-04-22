/*
** EPITECH PROJECT, 2022
** hello
** File description:
** hello
*/
#include "include/my.h"
#include <stdlib.h>
#include "include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int(*f) (void *))
{
    while (begin->next != NULL) {
        (*f)(begin->data);
        begin = begin->next;
    }
    return 0;
}
