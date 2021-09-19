/*
** EPITECH PROJECT, 2018
** my params list
** File description:
** my params list
*/

#include "include/mylist.h"
#include <unistd.h>

linked_list_t	*my_params_to_list(int ac, char * const *av)
{
    int i = 0;
    linked_list_t *prev = malloc(sizeof(linked_list_t));
    linked_list_t *head = malloc(sizeof(linked_list_t));
    linked_list_t *p = malloc(sizeof(linked_list_t));

    p->data = NULL;
    p->next = NULL;
    head->data = NULL;
    while (i <= ac && av[i] != NULL) {
        p->data = my_strdup(av[i]);
        if (head->data == NULL)
            head->data = p->data;
        else
            prev->next = p;
        prev = p;
        i++;
    }
    p->next = NULL;
    return (head->data);
}
