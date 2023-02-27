#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int len = 0;
int g;
while (*s != '\0')
{
len++;
s++;
}
s--;
for (g = len; g > 0; g--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
