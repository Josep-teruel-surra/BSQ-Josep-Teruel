/*
** EPITECH PROJECT, 2021
** my_char_isnum.c
** File description:
** my_char_isnum.c
*/

int my_char_isnum(char c)
{
    if (c >= 48 && c <= 57) {
        return (1);
    }
    else {
        return (0);
    }
}