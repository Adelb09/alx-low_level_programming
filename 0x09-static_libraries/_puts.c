#include <unistd.h>

/**
 * _puts - Prints a string to stdout.
 *
 * @str: Pointer to the string to print.
 */
void _puts(char *str)
{
int len = 0;

while (*(str + len))
{
len++;
}

write(STDOUT_FILENO, str, len);
}
