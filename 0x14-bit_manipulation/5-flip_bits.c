#include "main.h"
/**
 * flip_bits - flips the bits
 * @n: Number passed in
 * @m: the other number passed
 * Return: the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int count = 0;
while (xor)
{
count += xor & 1;
xor >>= 1;
}
return (count);
}
