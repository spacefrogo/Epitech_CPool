/*
** EPITECH PROJECT, 2018
** my_isneg.c
** File description:
** my_isneg.c
*/

int	my_isneg(int r)
{
    if(r < 0) {
        my_putchar('N');
    }else {
        my_putchar('P');
    }
    return(0);
}
        
