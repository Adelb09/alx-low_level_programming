#include <unistd.h>

/**
 * _putchar - Writes a character to standard output
 * @c: The character to be written
 *
 * Return: The number of characters printed (always 1)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
