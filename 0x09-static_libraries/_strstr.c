#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
char *result = NULL;
int i, j;

for (i = 0; haystack[i] != '\0'; i++) {
if (haystack[i] == needle[0]) {
result = &haystack[i];
j = 0;
while (needle[j] != '\0' && haystack[i+j] != '\0' && needle[j] == haystack[i+j]) {
j++;
}
if (needle[j] == '\0') {
return result;
}
result = NULL;
}
}

return NULL;
}
