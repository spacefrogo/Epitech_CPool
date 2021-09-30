/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** my_putstr.c
*/

int	my_putstr(char *str)
{
    int k;
    while(!(str[k] == '\0')) {
        write(1, &k, 1);
        k++;
    }
    return(0);
}
