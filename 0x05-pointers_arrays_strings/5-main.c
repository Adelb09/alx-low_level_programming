#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s[10] = "My School";
int i;

printf("%s\n", s);
for (i = 0; i < 10; i++)
{
_putchar(s[i]);
}
_putchar('\n');
rev_string(s);
printf("%s\n", s);
return (0);
}
