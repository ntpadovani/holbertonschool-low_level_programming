#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/*Defined type structs*/

/**
* type - A struct function.
* 
* @data: The variable containing the 
*        left side letter in our
*        2d array structure
* @f:    It points to the function on the right
*        side of  our 2d array structure.
*/
typedef struct type
{
        char data;
        void (*f)(va_list ptr);
} escoge_t;


/*From here below, the funtion prototypes*/

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
