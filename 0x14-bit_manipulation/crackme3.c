#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
char password[7] = "aLkaSu";
int i, correct;

if (argc != 2)
{
printf("Usage: %s password\n", argv[0]);
return 1;
}

if (strlen(argv[1]) != 6)
{
printf("Invalid password length\n");
return 1;
}

correct = 1;
for (i = 0; i < 6; i++)
{
if (argv[1][i] != password[i])
{
correct = 0;
break;
}
}

if (correct)
{
printf("Congratulations!\n");
return 0;
}
else
{
printf("Invalid password\n");
return 1;
}
}
