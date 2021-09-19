/*
** EPITECH PROJECT, 2018
** list size
** File description:
** list size
*/
#include "include/mylist.h"
#include <unistd.h>

int	my_list_size(linked_list_t const *begin)
{
    int datas;
    for(datas = 0; begin != NULL) {
        begin = begin->next;
        datas++;
    }
    return (datas);
}
