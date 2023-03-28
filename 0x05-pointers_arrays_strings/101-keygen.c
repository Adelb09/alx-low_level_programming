#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * main - generates a random password for the 101-crackme program
 * Return: 0
 */
int main(void)
{
    char password[100];

    srand(time(NULL));
    generate_password(password);
    printf("%s", password);
    return (0);
}

/**
 * generate_password - generates a random valid password for the 101-crackme
 * program
 * @password: buffer to store the password
 */
void generate_password(char *password)
{
int i, sum, n;

sum = 0;
i = 0;
while (sum < 2772 - 122)
{
n = rand() % (122 - 48) + 48;
password[i] = n;
sum += n;
i++;
}
password[i] = 2772 - sum;
i++;
password[i] = '\0';
}
