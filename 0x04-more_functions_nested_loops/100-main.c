#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int number = 612852475143;
unsigned long int largest_prime;

largest_prime = find_largest_prime(number);
printf("%lu\n", largest_prime);

return (0);
}
