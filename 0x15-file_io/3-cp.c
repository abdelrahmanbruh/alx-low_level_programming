#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Mallocs 1024
 * @file: file name storing the buffer
 *
 * Return: A pointer
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * close_file - closes the file fd
 * @fd: file descriptor
 */
void close_file(int fd)
{
int CF;
CF = close(fd);
if (CF == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - test
 * @argc: argument count
 * @argv: argument vector
 * Return: results
 *
 * Description: main to test the function
 */
int main(int argc, char *argv[])
{
int from, to, RD, WR;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
RD = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || RD == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
free(buffer);
exit(98);
}
WR = write(to, buffer, RD);
if (to == -1 || WR == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
RD = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (RD > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
