#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert.
 *
 * Return: the integer value of the converted string.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

while (s[i])
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
result = result * 10 + (s[i] - '0') * sign;
if (result != 0 && !(s[i] >= '0' && s[i] <= '9'))
break;
i++;
}
return (result);
}
