#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, the malloc_checked function causes normal
 *         process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
exit(98);

return (p);
}
