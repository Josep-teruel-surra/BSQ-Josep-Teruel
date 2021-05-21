/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** my_atoi
*/

#include "c_funct.h"

int my_atoi(char *str)
{
    int i = my_strlen(str) - 1;
    int nb = 0;
    int mult = 1;
    int neg = 0;

    if (str[0] == '-')
        neg = 1;
    while (i >= neg) {
        nb = nb + ((str[i] - 48) * mult);
        mult = mult * 10;
        i--;
    }
    if (neg)
        nb = -nb;
    return (nb);
}