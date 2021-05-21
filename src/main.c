/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "bsq.h"
#include "c_funct.h"

int main(int ac, char **av)
{
    if (error_handling(ac, av) == EXIT_ERROR)
        return (EXIT_ERROR);
    return (bsq(av[1]));
}