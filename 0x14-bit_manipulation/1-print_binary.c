#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
int size = sizeof(unsigned long int) * 8;
int i;

for (i = 0; i < size; i++)
mask <<= 1;
mask >>= 1;

while (mask)
{
if (n & mask)
_putchar('1');
else
_putchar('0');
mask >>= 1;
}
}
