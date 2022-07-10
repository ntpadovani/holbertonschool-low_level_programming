#include"variadic_functions.h"

/**
 * print_float - A function that prints a decimal.
 * @ptr:  Contains the values.
 * Return:  Void
 */
void print_float(va_list ptr)
{
	double storage;

	storage = va_arg(ptr, double);
	printf("%f", storage);
}

