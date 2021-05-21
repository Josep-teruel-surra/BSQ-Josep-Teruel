/*
** EPITECH PROJECT, 2021
** error_handling
** File description:
** error_handling
*/

#include <stddef.h>
#include "c_funct.h"
#include "bsq.h"

int error_handling(int ac, char **av)
{
    char *path = my_strdup(av[1]);
    char *content_file = NULL;

    if (ac != 2)
        return (EXIT_ERROR);
    if (!is_file_existing(path))
        return (EXIT_ERROR);
    content_file = read_file(path);
    if (!check_first_line(content_file))
        return (EXIT_ERROR);
    if (!check_nbr_lines(content_file))
        return (EXIT_ERROR);
    if (!check_each_line(content_file))
        return (EXIT_ERROR);
    if (!check_chars(content_file))
        return (EXIT_ERROR);
    return (EXIT_SUCCESSFUL);
}