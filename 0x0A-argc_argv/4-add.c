#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: the number of arguments passed
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
int i, j, sum;

sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
