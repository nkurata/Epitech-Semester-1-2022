/*
** EPITECH PROJECT, 2022
** HELLO
** File description:
** hello
*/

#include "include/my.h"
#include <stdlib.h>
#include "include/mylist.h"
int my_apply_on_matching_nodes(linked_list_t *begin , int (*f)(),
    void const *data_ref, int (*cmp)())
{
    while (begin->next != NULL) {
        if (cmp(begin->data, data_ref)) {
            (*f)(begin->data);
        }
        begin = begin->next;
    }
}
