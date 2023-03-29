#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be used from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

/* Find the end of the destination string */
for (i = 0; dest[i] != '\0'; i++)
;

/* Concatenate the source string to the destination string */
for (j = 0; src[j] != '\0' && j < n; j++)
dest[i + j] = src[j];

/* Add the terminating null byte */
dest[i + j] = '\0';

return (dest);
}
