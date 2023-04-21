#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if incorrect number of arguments given, or 2 if
 *         negative number of bytes given
 */
int main(int argc, char **argv)
{
int num_bytes, i;
char *main_ptr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

main_ptr = (char *) main;

for (i = 0; i < num_bytes; i++)
{
printf("%02x", *(main_ptr + i) & 0xff);

if (i != num_bytes - 1)
printf(" ");
}

printf("\n");

return (0);
}
