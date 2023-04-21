#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));

#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

/* function pointer prototype for a function that takes an int and returns void */
typedef void (*func_ptr_t)(int);

#endif /* FUNCTION_POINTERS_H */
