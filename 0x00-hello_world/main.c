#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
Export the C file name to the CFILE environment variable using the following command:

objectivec
Copy code
export CFILE=main.c
Run the script using the following command:

Copy code
./0x00-hello_world/0-preprocessor
Check the contents of the c file using the cat command:

bash
Copy code
cat c
The output should be similar to the following:

csharp
Copy code
# 1 "main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "main.c"
int main(void)
{
    return (0);
}









