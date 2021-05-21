/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** check_nbr_lines
*/

#include "bsq.h"
#include "c_funct.h"
#include <unistd.h>
#include <stdlib.h>

bool check_nbr_lines(char *content_file)
{
    int find_n = 0;
    int nbr_lines = 0;
    char *number = NULL;
    int count_lines = my_count_char(content_file, '\n') - 1;

    find_n = my_index_of(content_file, '\n', 0);
    number = my_cut(content_file, 0, (find_n - 1));
    nbr_lines = my_atoi(number);
    free(number);
    if (count_lines != nbr_lines)
        return (false);
    return (true);
}