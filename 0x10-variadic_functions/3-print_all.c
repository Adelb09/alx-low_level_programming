#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
va_list arg;
unsigned int i = 0;
char *str;

va_start(arg, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(arg, int));
break;
case 'i':
printf("%d", va_arg(arg, int));
break;
case 'f':
printf("%f", va_arg(arg, double));
break;
case 's':
str = va_arg(arg, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
i++;
continue;
}

if (format[i + 1] != '\0')
printf(", ");

i++;
}

printf("\n");
va_end(arg);
}
