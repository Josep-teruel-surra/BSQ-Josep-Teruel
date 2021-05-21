/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** check_chars
*/

#include "c_funct.h"
#include "bsq.h"
#include <stdbool.h>

bool is_controlled_char(char c)
{
    int i = 0;

    while (CHARS_MAP[i] != '\0') {
        if (CHARS_MAP[i] == c)
            return (true);
        i++;
    }
    return (false);
}

bool check_chars(char *content_file)
{
    int pos_first_char = my_index_of(content_file, '\n', 0) + 1;
    int i = pos_first_char;

    while (content_file[i] != '\0') {
        if (!is_controlled_char(content_file[i]))
            return (false);
        i++;
    }
    return (true);
}