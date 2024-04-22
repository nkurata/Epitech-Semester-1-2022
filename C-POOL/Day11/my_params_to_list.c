/*
** EPITECH PROJECT, 2022
** params
** File description:
** params
*/
#include "include/my.h"
#include <stdlib.h>
#include "include/mylist.h"

int listadd(linked_list_t **list, char *data)
{
    linked_list_t *element;
    element = malloc(sizeof(*element));
    element->data = data;
    element->next = *list;
    *list = element;
    return 0;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;
    for (int i = 0; i < ac; i++) {
        listadd(&list, av[i]);
    }
    return (list);
}
