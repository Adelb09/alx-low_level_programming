#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
