#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 if successful
 */

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0'); /* Prints the digit */
if (i < 9) /* Checks if not the last digit */
{
putchar(','); /* Prints the comma */
putchar(' '); /* Prints the space */
}
}

putchar('\n'); /* Prints new line character */

return (0);
}
