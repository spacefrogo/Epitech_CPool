/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** my_strncpy.c
*/

#include <unistd.h>
#include <string.h>

int	my_strlen(char *str)
{
    int	i = 0;

    if (str != NULL) {
        while (str[i] != '\0') {
            i++;
        }
        return (i);
    }
    else
        return (0);
}

char	*my_strncpy(char *drejtimi, char *burimi, int n)
{
    int i;
    if (n > 0 && n <= my_strlen(burimi)) {
        for (i = 0; i <= n && burimi[i] != '\0'; i++) {
            drejtimi[i] = burimi[i];
            if (i == n - 1) {
                return (drejtimi);
            }
        }
    }
    if (n > my_strlen(burimi)) {
        drejtimi[i] = burimi[i];
    }
    drejtimi[i] = '\0';
    return (drejtimi);
}

