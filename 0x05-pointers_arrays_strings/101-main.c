#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
char *password;

if (argc != 2)
{
printf("Usage: %s <password>\n", argv[0]);
return (1);
}

password = strdup(argv[1]);

if (strcmp(password, "101-crackme") == 0)
{
printf("Congratulations!\n");
}
else
{
printf("Invalid password\n");
}

free(password);

return (0);
}
