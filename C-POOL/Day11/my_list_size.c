/*
** EPITECH PROJECT, 2022
** list size
** File description:
** list size
*/
#include "include/my.h"
#include <stdlib.h>
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int i = 0;
    linked_list_t *element;
    element = begin;
    while (element != NULL) {
        i++;
        element = element->next;
    }
    return i;
}
