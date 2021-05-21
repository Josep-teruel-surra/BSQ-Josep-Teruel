/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** translate_map
*/

#include <stdlib.h>
#include "c_funct.h"
#include "bsq.h"

int **translate_map(char *cont_file)
{
    int pos_char = my_index_of(cont_file, '\n', 0) + 1;
    int nbr_columns = get_column(cont_file);
    int nbr_lines = get_lines(cont_file);
    int **map = init_int_matrix(nbr_lines, nbr_columns);
    int i_map = 0;
    int j_map = 0;

    while (cont_file[pos_char] != '\0') {
        if (cont_file[pos_char] == '.')
            map[i_map][j_map++] = 1;
        if (cont_file[pos_char] == 'o')
            map[i_map][j_map++] = 0;
        if (cont_file[pos_char] == '\n') {
            i_map++;
            j_map = 0;
        }
        pos_char++;
    }
    return (map);
}