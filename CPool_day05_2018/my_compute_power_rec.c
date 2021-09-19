/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** my_compute_power_rec.c
*/

int	my_compute_power_rec(int vlera, int fuqia)
{
    int a;
    int iMax = 2147483647;
    int iMaxN = -2147483648;

    a = 1;
    if (fuqia == 0)
        return 1;
    if (fuqia < 0)
        return (0);
    a = vlera * my_compute_power_rec(vlera, fuqia - 1);
    if (iMax >= a && a >= iMaxN)
        return a;
    else
        return 0;
}
