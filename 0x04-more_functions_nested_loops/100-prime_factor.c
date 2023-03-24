#include "main.h"

/**
 * find_largest_prime - Finds and returns the largest prime factor
 *                      of a given number.
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of @n.
 */
unsigned long int find_largest_prime(unsigned long int n)
{
unsigned long int largest = 2;

while (n != 1)
{
if (n % largest == 0)
{
n = n / largest;
if (largest > 2)
largest = 2;
}
else
{
largest++;
}
}
return (largest);
}
