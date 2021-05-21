/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** init_sqr_struct
*/

#include "c_funct.h"
#include "bsq.h"

t_biggest_sqr init_sqr_struct(void)
{
    t_biggest_sqr sqr;

    sqr.size = 0;
    sqr.x = 0;
    sqr.y = 0;
    return (sqr);
}