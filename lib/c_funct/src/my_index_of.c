/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** my_index_of
*/

#include "c_funct.h"

int my_index_of(char *str, char c, int nb)
{
    int i = nb;

    while (str[i] != '\0') {
        if (str[i] == c)
            return (i);
        i++;
    }
    return (-1);
}