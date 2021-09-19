/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** my_strcat.c
*/
#include <unistd.h>

/*int	my_strlen(char const *str)
{
    int y;
    if(str == NULL) {
        return(0);
    }
    for(y = 0; str[y] != '\0'; y++) {
        return y;
    }
    }*/

char	*my_strcat(char *dest, const char *src)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0 ; src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}
