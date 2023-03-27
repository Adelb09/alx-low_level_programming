#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
int a, b;

a = 98;
b = 402;

printf("a=%d, b=%d\n", a, b);

swap_int(&a, &b);

printf("a=%d, b=%d\n", a, b);

return (0);
}
