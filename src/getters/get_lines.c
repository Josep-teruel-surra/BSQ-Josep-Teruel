/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** get_lines
*/

#include <stddef.h>
#include "c_funct.h"
#include "bsq.h"

int get_lines(char *content_file)
{
    char *result = NULL;
    int get_nbr = my_index_of(content_file, '\n', 0) - 1;

    result = my_cut(content_file, 0, get_nbr);
    return (my_atoi(result));
}