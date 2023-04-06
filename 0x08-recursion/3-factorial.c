#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of the given number. If the number is less than 0,
 *         the function should return -1 to indicate an error.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (1);
else
return (n * factorial(n - 1));
}
