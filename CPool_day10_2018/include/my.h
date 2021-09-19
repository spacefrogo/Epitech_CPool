/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/
#ifndef MY_H_
#define MY_H_

int     my_strlen(char const *str);
void	my_putchar(char c);
int	my_putstr(char const *str);
int     my_find_prime_sup(int nb);
int     my_getnbr(char const *str);
int     my_isneg(int r);
int     my_is_prime(int nb);
int     my_put_nbr(int nb);
char    *my_revstr(char *str);
int     my_showmem(char const *str);
int     my_showstr(char const *str);
void    my_sort_int_array(int *tab, int size);
char    *my_strcapitalize(char *str);
char    *my_strcat(char *dest, char const *src);
char    *my_strcpy(char *dest, char const *src);
int     my_str_isalpha(char const *str);
int     my_str_islower(char const *str);
int     my_str_isnum(char const *str);
int     my_str_isprintable(char const *str);
int     my_str_isupper(char const *str);
char    *my_strlowcase(char *str);
char    *my_strncat(char *dest, char const *src, int nb);
int     my_strncmp(char const *s1, char const *s2, int n);
char    *my_strncpy(char *drejtimi, char *burimi, int n);
char    *my_strstr(char *str, char const *to_find);
char    *my_strupcase(char *str);
void    my_swap(int *a, int *b);
    
#endif /* MY_H_ */
