#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Writes a function that reads a text file
 * @filename: file name to be read
 * @letters: number of letters should be read or print
 * Return: the num_read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int WR;
int fd, num_read;
char *buffer;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
num_read = read(fd, buffer, sizeof(buffer));
if (num_read == -1)
{
free(buffer);
close(fd);
return (0);
}
WR = write(fd, buffer, num_read);
if (num_read != WR)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (num_read);
}
