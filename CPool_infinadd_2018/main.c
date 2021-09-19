/*
** EPITECH PROJECT, 2018
** main\
** File description:
** main\
*/

#include <unistd.h>

int     string_to_int(char *str)
{
    int i = 0;
    int j;

    while (str[i] != '\0') {
        if(str[i] >= 48 && str[i] <= 57) {
            j = my_getnbr(str);
            i++;
        }
        else
            return 84;
    }
    return j;
}

int     main(int ac, char *av[])
{
    if(ac != 3) {
        return 84;
    }
    
    int nb1 = my_getnbr(av[1]);
    int nb2 = my_getnbr(av[2]);
    int k = nb1 + nb2;

    my_putnb(k);
    return(0);
}
