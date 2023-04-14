#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int len_s1, len_s2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len_s1 = 0; s1[len_s1]; len_s1++)
;
for (len_s2 = 0; s2[len_s2]; len_s2++)
;
if (n >= len_s2)
n = len_s2;

concat_str = malloc(sizeof(char) * (len_s1 + n + 1));
if (concat_str == NULL)
return (NULL);

for (i = 0; i < len_s1; i++)
concat_str[i] = s1[i];
for (j = 0; j < n; j++)
concat_str[i + j] = s2[j];
concat_str[i + j] = '\0';

return (concat_str);
}
