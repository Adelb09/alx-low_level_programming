#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: The number of arguments passed
 * @av: An array of pointers to the arguments
 *
 * Return: A pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0;
int len = 0;
char *str;

/* edge cases */
if (ac == 0 || av == NULL)
return (NULL);

/* calculate total length of arguments */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++; /* add 1 for new line character */
}

/* allocate memory for string */
str = malloc(sizeof(char) * (len + 1));

/* copy arguments into string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n'; /* add new line character */
k++;
}
str[k] = '\0'; /* terminate string with null character */

return (str);
}
