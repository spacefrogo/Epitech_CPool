/*
** EPITECH PROJECT, 2018
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/

int	my_print_revalpha(void)
{
    for(int t = 122; t >= 97; t--) {
        my_putchar(t);
    }
    my_putchar('\n');
}
