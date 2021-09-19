/*
 ** EPITECH PROJECT, 2018
 ** my_print_comb.c
 ** File description:
 ** my_print_comb.c
 */

int 	my_print_comb(void)
{
    for(int i = 48; i < 57; i++) {
        for(int j = i+1; j < 57; j++) {
            for(int k =j+1; k <= 57; k++) {
                if(i == 55 && j == 56 && k == 57) {
                    my_putchar(i);
                    my_putchar(j);
                    my_putchar(k);
                    return(0);
                }
                my_putchar(i);
                my_putchar(j);
                my_putchar(k);
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
    return(0);
}
