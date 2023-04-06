#include "main.h"

/**
 * is_prime - check if number is prime recursively
 * @n: number to check
 * @i: divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int i)
{
if (n < 2 || n % i == 0)
return (0);
else if (i > n / 2)
return (1);
else
return (is_prime(n, i + 1));
}

/**
 * is_prime_number - check if input integer is prime
 * @n: input integer
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
else if (n <= 1 || n % 2 == 0)
return (0);
else
return (is_prime(n, 3));
}
