/*
** EPITECH PROJECT, 2018
** my_compute_factorial_it.c
** File description:
** my_compute_factorial_it.c
*/

int	my_compute_factorial_it(int vlera)
{
    unsigned long b;
    b = 1;
    while(vlera > 1) {
	b = b * vlera;
	vlera--;
    }
    if(vlera < 0) {
        return 0;
    }else if(vlera == 0){
        return b;
    }else if(b >= 2147483647) {
        return 0;
    }else{
        return b;
    }
}
