/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** checks if the given string is a number
*/

#include <stdbool.h>
#include "c_funct.h"

bool my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!my_char_isnum(i))
            return (false);
        i++;
    }
    return (true);
}
