/*
** EPITECH PROJECT, 2018
** revstr
** File description:
** revstr
*/

#include <unistd.h>

int	my_strlen(char *str)
{
    int	k = 0;

    while(str[k] != '\0') {
        k++;
    }
    return k;    
}

void    my_swap(char a, char b)
{
    char vlera;

    vlera = a;
    a = b;
    b = vlera;
}

char	*my_revstr(char *str)
{
    int i;
    int j = my_strlen(str);

    i = 0;
    while (str[i] != '\0' && str[j] != str[0]) {
        printf("%s\t\t%s\n", str[i], str[j]);
        my_swap(str[i++], str[j--]);
        //str[i++] = str[j--];
        printf("%s\t\t%s\n", str[i], str[j]);
    }
    str[i] = '\0';
    return (str);
}

int	main(void)
{
    char *src = strdup("valton");
    char *dest = strdup(src);
    
    dest = my_revstr(src);
    printf("%s\n", dest);
    return(0);
}
