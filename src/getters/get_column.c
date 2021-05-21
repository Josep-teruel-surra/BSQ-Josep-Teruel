/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** get_column
*/

#include "bsq.h"
#include "c_funct.h"

int get_column(char *content_file)
{
    int index_first_line = my_index_of(content_file, '\n', 0);
    int start = index_first_line + 1;
    int end = my_index_of(content_file, '\n', start);
    int length_line = end - start;

    return (length_line);
}