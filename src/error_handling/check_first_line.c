/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** check_first_line
*/

#include <stdbool.h>
#include "c_funct.h"
#include "bsq.h"

bool check_first_line(char *content_file)
{
    int i = 0;

    while (content_file[i] != '\n') {
        if (!my_char_isnum(content_file[i]))
            return (false);
        i++;
    }
    return (true);
}