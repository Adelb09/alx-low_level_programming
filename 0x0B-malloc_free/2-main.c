#include "main.h"
#include <stdio.h>

int main(void)
{
char *s;

s = str_concat("Hello, ", "world!");
if (s == NULL)
{
printf("str_concat failed\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}
