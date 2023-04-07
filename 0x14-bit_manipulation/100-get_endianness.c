#include "main.h"
/**
 * get_endianness - check if its little endian or big endian
 * Return: the cast to the pointer c
 */
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &x;
return ((int)*c);
}
