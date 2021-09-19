/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** my_putstr.c
*/

int	my_putstr(char const *str)
{
    int i;

    i = 0;
    while(str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return(0);
}
