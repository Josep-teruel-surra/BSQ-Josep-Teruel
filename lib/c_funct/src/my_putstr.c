/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** Day4 task02
*/

#include <unistd.h>

int my_strlen(char *str);

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}