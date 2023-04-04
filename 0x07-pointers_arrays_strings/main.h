#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/* _memset - fills memory with a constant byte */
void *_memset(void *s, int c, size_t n);

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);
int _putchar(char c);
char *_strpbrk(char *s, char *accept);
int _putchar(char c);
char *_strstr(char *haystack, char *needle);
int _putchar(char c);

#endif /* MAIN_H */
