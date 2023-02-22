#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
char letter;
int newline;
while (newline < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
newline++;
}
}
