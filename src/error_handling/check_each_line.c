/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** check_each_line
*/

#include <stdbool.h>
#include "c_funct.h"
#include "bsq.h"

bool check_each_line(char *content_file)
{
    int index_first_line = my_index_of(content_file, '\n', 0);
    int start = index_first_line + 1;
    int end = my_index_of(content_file, '\n', start);
    int length_line = end - start;

    while (my_index_of(content_file, '\n', start) != -1) {
        end = my_index_of(content_file, '\n', start);
        if (end - start != length_line)
            return (false);
        start = end + 1;
    }
    return (true);
}