#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/*From here below, the funtion prototypes*/

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
