/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** my_count_char
*/

#include "c_funct.h"

int my_count_char(char *str, char c)
{
    int i = 0;
    int counter = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            counter++;
        i++;
    }
    return (counter);
}