/*
** EPITECH PROJECT, 2018
** my_compute_power_it.c
** File description:
** my_compute_power_it.c
*/

int	my_compute_power_it(int vlera, int fuqia)
{
    int a = 1;
    int maxP = 2147483647;
    int maxN = -2147483648;
    if (fuqia == 0)
        return 1;
    if (fuqia < 0)
        return (0);
    for(int i = 0; i < fuqia; i++) {
        a *=  vlera;
        if (a >= maxP || a <= maxN)
            return 0;
    }
    return (a);
}
     
