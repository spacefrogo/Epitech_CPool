/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** my_strlen.c
*/
#include <unistd.h>

int	my_strlen(char const *str)
{
    int	k;
    if(str == NULL)
        return(0);
    for(k = 0; str[k] != '\0'; k++)
    return k;    
}
