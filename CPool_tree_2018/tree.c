/*
** EPITECH PROJECT, 2018
** tree.c
** File description:
** tree.c
*/

void	tree(int size)
{
    int r;
    int cP;
    int cS;
    for(r = 1; r <= size; r++) {
        for(cP = size - r; cP >= 1; cP--) {
            my_putchar(' ');
        }
        for(cS = 1; cS <= (r * 2)-1; cS++) {
            my_putchar('*');
        }
        my_putchar('\n');
    }
}

