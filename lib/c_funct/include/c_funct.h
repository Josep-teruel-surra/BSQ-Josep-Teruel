/*
** EPITECH PROJECT, 2021
** c_funct.h
** File description:
** c_funct.h
*/

#ifndef C_FUNCT_
#define C_FUNCT_

#include <stdbool.h>

char *my_capitalize(char *str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_getnbr(char const *str);
int my_intlen(int nb);
char *my_strdup(char *str);
int my_isneg(int n);
int **init_int_matrix(int lines, int columns);
char *my_cut(char *str, int a, int b);
int my_index_of(char *str, char c, int nb);
int my_char_isnum(char c);
int my_count_char(char *str, char c);
int my_atoi(char *str);
int my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
char *my_revstr(char *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
bool my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);


#endif /* !C_FUNCT_ */
