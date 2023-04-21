#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations on two integer inputs
 * @argc: the number of command line arguments
 * @argv: an array of strings representing the command line arguments
 *
 * Return: 0 on success, 98 on incorrect number of arguments, 99 on invalid
 * operator, 100 on attempted division by zero
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *op;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = argv[2];

op_func = get_op_func(op);

if (!op_func)
{
printf("Error\n");
exit(99);
}

if ((*op == '/' || *op == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

result = op_func(num1, num2);

printf("%d\n", result);

return (0);
}
