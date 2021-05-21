/*
** EPITECH PROJECT, 2021
** mallocate string
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "c_funct.h"

char *my_strdup(char *str)
{
    int i = 0;
    char *str_malloc = malloc(sizeof(char) * (my_strlen(str) + 1));

    while (str[i]) {
        str_malloc[i] = str[i];
        i++;
    }
    str_malloc[i] = '\0';
    return (str_malloc);
}
