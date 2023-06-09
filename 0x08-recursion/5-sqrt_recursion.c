#include "main.h"

/**
 * find_sqrt - finds the natural square root of a number using recursion
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 0));
}
