#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 if successful
 */

int main(void)
{
int i;

for (i = 0; i < 10; i++)
putchar(i + '0'); /* Prints digits 0-9 */

for (i = 'a'; i <= 'f'; i++)
putchar(i); /* Prints letters a-f */

putchar('\n'); /* Prints new line character */

return (0);
}
