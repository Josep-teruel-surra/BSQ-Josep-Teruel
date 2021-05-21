/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** transforms a string into an int
*/

int my_getnbr(char const *str)
{
    int len = 0;
    int p = 1;
    int nmb = 0;

    while (str[len] == '+' || str[len] == '-') {
        if (str[len] == '-')
            p = -p;
        len++;
    }
    while (str[len] != '\0') {
        if (str[len] >= '0' && str[len] <= '9') {
            nmb = nmb * 10;
            nmb = nmb + str[len] - '0';
            len++;
        } else
            return (nmb * p);
    }
    return (nmb * p);
}
