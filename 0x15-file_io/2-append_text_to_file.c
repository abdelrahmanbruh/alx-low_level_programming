#include "main.h"
/**
 * append_text_to_file - appends text to the file
 * @filename: file passed as an argument
 * @text_content: string passed as an argument
 * Return: 1 or -1 if fails
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
int OP, WR, len = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
{
len++;
}
}
OP = open(filename, O_WRONLY | O_APPEND);
WR = write(OP, text_content, len);
if (OP == -1 || WR == -1)
{
return (-1);
}
close(OP);
return (1);
}
