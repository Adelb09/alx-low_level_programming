#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
int i, len, n;

/* find length of string */
for (len = 0; str[len] != '\0'; len++)
;

/* calculate the starting point of the second half */
if (len % 2 == 0)
n = len / 2;
else
n = (len - 1) / 2 + 1;

/* print the second half */
for (i = n; i < len; i++)
_putchar(str[i]);

/* print new line */
_putchar('\n');
}
