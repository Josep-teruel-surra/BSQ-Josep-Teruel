/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** my_cut
*/

#include "c_funct.h"
#include <stdlib.h>

char *my_cut(char *str, int a, int b)
{
    char *str_end = malloc(sizeof(char) * (2 + (b - a)));
    int i = 0;

    while (a <= b) {
        str_end[i] = str[a];
        a++;
        i++;
    }
    str_end[i] = '\0';
    return (str_end);
}