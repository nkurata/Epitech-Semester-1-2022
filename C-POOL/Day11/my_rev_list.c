/*
** EPITECH PROJECT, 2022
** yes
** File description:
** yes
*/
#include "include/my.h"
#include <stdlib.h>
#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *temp;
    linked_list_t *prev;
    linked_list_t *next;
    prev = *begin;
    temp = 0;
    while (prev->next != NULL) {
        next = prev->next;
        prev->next = temp;
        temp = prev;
        prev = next;
    }
    prev->next = temp;
    *begin = prev;
    return 0;
}
