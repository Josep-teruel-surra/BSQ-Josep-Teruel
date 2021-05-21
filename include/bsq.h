/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** bsq.h
*/

#ifndef BSQ_
#define BSQ_

#define EXIT_ERROR 84
#define EXIT_SUCCESSFUL 0
#define CHARS_MAP "o.\n"

#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct s_biggest_sqr
{
    int x;
    int y;
    int size;
} t_biggest_sqr;

int error_handling(int ac, char **av);
bool check_nbr_lines(char *content_file);
char *read_file(char *content_file);
int get_lines(char *content_file);
int get_column(char *content_file);
bool check_first_line(char *content_file);
bool check_each_line(char *content_file);
t_biggest_sqr init_sqr_struct(void);
t_biggest_sqr get_biggest_square(int **map, int nbr_lines, int nbr_columns);
bool check_chars(char *content_file);
bool check_each_line(char *content_file);
bool is_file_existing(char *content_file);
int bsq(char *path);
int **translate_map(char *cont_file);

#endif /* !BSQ_ */
