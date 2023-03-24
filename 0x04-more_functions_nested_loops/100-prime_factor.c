#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
unsigned long n = 612852475143;
unsigned long i;

for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
printf("%lu", i);
n /= i;
i--;
}
}

putchar('\n');
return (0);
}
