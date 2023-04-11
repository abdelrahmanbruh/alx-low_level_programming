#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Writes a function that reads a text file
 * @filename: file name to be read
 * @letters: number of letters should be read or print
 * Return: the num_read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t WR;
ssize_t fd, num_read;
char *buffer;
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}

buffer = malloc(sizeof(char) * letters);
num_read = read(fd, buffer, letters);
WR = write(STDOUT_FILENO, buffer, num_read);

free(buffer);
close(fd);
return (WR);
}
