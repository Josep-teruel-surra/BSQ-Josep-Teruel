/*
** EPITECH PROJECT, 2021
** is_path_existing.c
** File description:
** is_path_existing.c
*/

#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

bool is_file_existing(char *path)
{
    int fd = open(path, O_RDONLY);

    if (fd == -1)
        return (false);
    return (true);
}