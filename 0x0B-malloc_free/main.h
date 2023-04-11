#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _putchar(char c);
/* standard C libraries */
#include <stdlib.h>

/* function prototypes */
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
int _putchar(char c);
/* Included Libraries*/
#include <stdio.h>
#include <stdlib.h>

/* Function Prototypes*/
int _putchar(char c);
int **alloc_grid(int width, int height);


int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _putchar(char c);
char *argstostr(int ac, char **av);
int _putchar(char c);
#include <stdlib.h>

int count_words(char *str);
char **strtow(char *str);

#endif /* MAIN_H */
