#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to be parsed
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int i, count;

count = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}

return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int i, j, k, n, count;

if (str == NULL || *str == '\0')
return (NULL);

count = count_words(str);
words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);

for (i = 0, k = 0; i < count; i++)
{
while (str[k] == ' ')
k++;

n = 0;
while (str[k + n] != ' ' && str[k + n] != '\0')
n++;

words[i] = malloc(sizeof(char) * (n + 1));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}

for (j = 0; j < n; j++)
words[i][j] = str[k++ + j];
words[i][j] = '\0';
}

words[i] = NULL;

return (words);
}
