/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** my_strcpy.c
*/

char	*my_strcpy(char *drejtimi, char const *burimi)
{
    int i;
    for(i = 0; burimi[i] != '\0'; i++) {
        drejtimi[i] = burimi[i];
         
    }
    drejtimi[i] = '\0';
    return drejtimi;
}


