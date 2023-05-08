#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024

/**
 * print_error - Prints an error message to stderr and exit
 *
 * @message: The error message
 * @filename: The name of the file associated with the error
 * @code: The exit code to use when exiting
 */

void print_error(char *message, char *filename, int code)
{
dprintf(STDERR_FILENO, message, filename);
exit(code);
}

/**
 * main - Copies the contents of one file to another.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, otherwise an error code.
 */

int main(int argc, char **argv)
{
int fd_from, fd_to, ret;
ssize_t read_bytes, write_bytes;
char buffer[BUFSIZE];
if (argc != 3)
{
print_error("Usage: cp file_from file_to\n", "", 97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
print_error("Error: Can't read from file %s\n", argv[1], 98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
print_error("Error: Can't write to %s\n", argv[2], 99);
}
while ((read_bytes = read(fd_from, buffer, BUFSIZE)) > 0)
{
write_bytes = write(fd_to, buffer, read_bytes);
if (write_bytes != read_bytes)
{
print_error("Error: Can't write to %s\n", argv[2], 99);
}
}
if (read_bytes == -1)
{
print_error("Error: Can't read from file %s\n", argv[1], 98);
}
ret = close(fd_from);
if (ret == -1)
{
print_error("Error: Can't close fd %d\n", (void *)&fd_from, 100);
}
ret = close(fd_to);
if (ret == -1)
{
print_error("Error: Can't close fd %d\n", (void *)&fd_to, 100);
}
return (0);
}
