/**
 * _strlen - Computes the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int i = 0;

while (*(s + i) != '\0')
i++;

return (i);
}
