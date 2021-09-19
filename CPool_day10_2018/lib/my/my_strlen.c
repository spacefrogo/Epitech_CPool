/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** my_strlen.c
*/

int	my_strlen(char const *str)
{
    int	k;
    while(str[k] != '\0') {
		k++;
	}
    return k;    
}
