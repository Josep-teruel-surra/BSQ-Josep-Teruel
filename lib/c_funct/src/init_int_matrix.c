/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** my_init_matrix
*/

#include <stddef.h>
#include <stdlib.h>

int **init_int_matrix(int lines, int columns)
{
    int i = 0;
    int **matrix = malloc(sizeof(int *) * lines);

    if (matrix == NULL)
        return (NULL);
    while (i < lines) {
        matrix[i] = malloc(sizeof(int) * columns);
        if (matrix[i] == NULL)
            return (NULL);
        i++;
    }
    return (matrix);
}