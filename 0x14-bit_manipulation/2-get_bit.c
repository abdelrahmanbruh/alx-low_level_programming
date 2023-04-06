#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: number to be passed
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
return ((n >> index) & 1);
}
