/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** my_strdup.c
*/
#include <unistd.h>
#include <stdlib.h>

char    *my_strdup(char const *src)
{
    int i;
    char *str;
    str = malloc(sizeof(char) * (my_strlen(src) + 1));

    if(src == NULL)
        return NULL;
    
    for(i = 0; src[i] != '\0'; i++) {
        str[i] = src[i];
    }
    str[i] = '\0';
    return str;
}
