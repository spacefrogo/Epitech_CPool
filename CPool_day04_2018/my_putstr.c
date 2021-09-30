/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** my_putstr.c
*/

int	my_putstr(char *str)
{
    int k = 0;
    if (str == NULL)
        return (84);
    while(!(str[k] == '\0')) {
        write(1, &k, 1);
        k++;
    }
    return (0);
}
