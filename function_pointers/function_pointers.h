#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

/*The function prototypes are below from this comment*/

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
