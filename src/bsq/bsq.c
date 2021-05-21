/*
** EPITECH PROJECT, 2021
** bsq.c
** File description:
** bsq.c
*/

#include <stdlib.h>
#include "c_funct.h"
#include "bsq.h"

char *clean_map(char *content_file)
{
    int start = my_index_of(content_file, '\n', 0) + 1;
    int length = my_strlen(content_file);
    char *cleaned_map = malloc(sizeof(char) * (length - start + 1));
    int i = start;

    while (content_file[i] != '\0') {
        cleaned_map[i - start] = content_file[i];
        i++;
    }
    cleaned_map[i - start] = '\0';
    return (cleaned_map);
}

bool is_line_bsq(int i, t_biggest_sqr sqr)
{
    int size = 0;

    while (size < sqr.size) {
        if (i == sqr.y - size)
            return (true);
        size++;
    }
    return (false);
}

void print_line(char *line, t_biggest_sqr square)
{
    int i = 0;

    while (line[i]) {
        if ((i > (square.x - square.size)) && (i <= square.x))
            my_putchar('x');
        else
            my_putchar(line[i]);
        i++;
    }
}

void print_map(char *cleaned_map, t_biggest_sqr square)
{
    int i = 0;
    int start = 0;
    int end = 0;

    while (my_index_of(cleaned_map, '\n', start) != -1) {
        end = my_index_of(cleaned_map, '\n', start);
        if (!is_line_bsq(i, square))
            my_putstr(my_cut(cleaned_map, start, end));
        else
            print_line(my_cut(cleaned_map, start, end), square);
        start = end + 1;
        i++;
    }
}

int bsq(char *path)
{
    char *content_file = read_file(path);
    char *cleaned_map = clean_map(content_file);
    int **map = translate_map(content_file);
    int lines = get_lines(content_file);
    int columns = get_column(content_file);

    t_biggest_sqr square = get_biggest_square(map, lines, columns);
    print_map(cleaned_map, square);
    return (EXIT_SUCCESSFUL);
}