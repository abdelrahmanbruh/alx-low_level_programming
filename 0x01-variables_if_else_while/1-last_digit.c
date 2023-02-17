#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

int s;

s = n % 10;

if (s < 5)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, s);
}
else if (s == 0)
{
printf("the last digit of %d is 0 and is 0", s);
}
else if (s > 5)
{
printf("the last digit of %d is %d and is greater than 5", n, s);
}
return (0);
}
