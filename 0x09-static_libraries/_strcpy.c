/**
 * _strcpy - copies a string to a buffer
 * @dest: buffer to copy string to
 * @src: string to copy
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, const char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];

dest[i] = '\0';

return dest;
}
