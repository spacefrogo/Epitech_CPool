/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec
** File description:
** my_compute_factorial_rec
*/

int	my_compute_factorial_rec(int vlera)
{
    unsigned long b;
    if(vlera < 0) {
        return 0;
    } else if(vlera == 0) {
        return 1;
    } else if (vlera >= 1 && vlera <= 12) {
         b = vlera*my_compute_factorial_rec(vlera -1);
        return b;
    } else {
        return 0;
    }  
}
