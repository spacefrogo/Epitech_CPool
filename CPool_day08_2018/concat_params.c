/*
** EPITECH PROJECT, 2018
** concat_params
** File description:
** concat_params
*/

#include <stdlib.h>
#include <unistd.h>


char	*concat_params(int argc, char **argv)
{
    int i;
    int j;
    int y;    
    j = 0;
    for(i = 0; i < argc; i++) {        
        j = my_strlen(argv[i]) + j;
    }
    char *dest = malloc(sizeof(char) * (j + argc));
    for(y = 0; y < argc; y++) {
        
        dest = my_strdup(dest, "\n");
        dest = my_strdup(dest, argv[y]);
    }
    return (dest);
}

int	main(int ac, char **av)
{
    my_putstr(concat_params(ac, av));
    return(0);
}
