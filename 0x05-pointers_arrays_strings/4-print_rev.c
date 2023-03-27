#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
int i, len;

/* find length of string */
for (len = 0; s[len] != '\0'; len++)
;

/* print characters of string in reverse */
for (i = len - 1; i >= 0; i--)
_putchar(s[i]);

/* print newline character */
_putchar('\n');
}
