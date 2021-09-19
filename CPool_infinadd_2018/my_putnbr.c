/*
** EPITECH PROJECT, 2018
** nbr 
** File description:
** nbr
*/

#include <unistd.h>

void	my_putnb(int number)
{
    if(number < 0) {
        my_putchar('-');
        my_putnb(-number);
    } else if (number > 9) {
        my_putnb(number / 10);
        my_putnb(number % 10);
    } else {
        my_putchar(number + '0');
    }
}
