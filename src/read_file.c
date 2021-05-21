/*
** EPITECH PROJECT, 2021
** B-CPE-110-BAR-1-1-BSQ-josep2.teruel-surra
** File description:
** read_file
*/

#include "bsq.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *read_file(char *path)
{
    char *buffer = NULL;
    int fd = open(path, O_RDONLY);
    struct stat sb;

    if (fd == -1)
        return (NULL);
    if (stat(path, &sb) == -1)
        return (NULL);
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    if (!buffer)
        return (NULL);
    read(fd, buffer, sb.st_size);
    buffer[sb.st_size] = '\0';
    close(fd);
    return (buffer);
}