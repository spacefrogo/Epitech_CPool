/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** my_getnbr
*/
#include <unistd.h>

int	my_getnbr(char *str)
{
    int i;
    int j = 1;
    int number = 0;
    if(str == NULL)
        return NULL;
    while(str[i] != '\0') {
        if(str[i] == '-') {
            j = -1 * j;
            i++;
        } else if (str[i] == '+') {
            j = j;
            i++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            number = number * 10 + str[i] - 48;
            i++;
        } else
            return number * j;
    }
    return number * j;
}
