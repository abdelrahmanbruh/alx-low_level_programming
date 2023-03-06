#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int v;
int c;
for( v = 0 ; v < 8 ; v++)
{
for ( c = 0 ; c < 8 ; c++)
{
_putchar(a[v][c]);
_putchar('\n');
}
}
}
