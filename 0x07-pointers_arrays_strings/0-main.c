#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char buffer[98] = {0x00};
char *s = "First, solve the problem. Then, write the code.";

printf("%s\n", s);
memset(buffer, 'A', 10);
printf("%s\n", buffer);
return (0);
}
