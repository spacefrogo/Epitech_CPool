/*
** EPITECH PROJECT, 2018
** file
** File description:
** asdfghh
*/
#include <unistd.h>

int	my_strlen(char const *str)
{
    int g;
    for(g = 0; str[g] != '\0'; g++){
        return g;
    }
    if(str == NULL)
        return 0;
}

char	*my_strncat(char *dest, const char *src, int nb)
{
    int  dest_len = strlen(dest);
    int i;

    for (i = 0 ; i < nb && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return dest;
}

