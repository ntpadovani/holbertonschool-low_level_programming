#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
