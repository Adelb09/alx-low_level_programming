#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to search
 * @needle: Substring to search for
 *
 * Return: Pointer to the beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
{
/* empty body */
}
if (needle[k] == '\0')
{
return (haystack + i);
}
}

return (NULL);
}
