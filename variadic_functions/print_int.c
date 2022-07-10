#include"variadic_functions.h"

/**
 * print_int - A function that prints an integer.
 * @ptr:  Contains the values.
 * Return:  Void
 */
void print_int(va_list ptr)
{
	int storage;

	storage = va_arg(ptr, int);
	printf("%d", storage);
}

