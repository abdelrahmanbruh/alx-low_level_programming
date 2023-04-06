#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to
 * @n: parameter to be passed
 * @index: the index, starting from 0
 * @n: argument to be passed
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8 - 1)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
