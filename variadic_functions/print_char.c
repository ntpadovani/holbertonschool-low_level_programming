#include"variadic_functions.h"

/**
 * print_char - A function that prints a char.
 * @ptr:  Contains the values.
 * Return:  Void
 */

void print_char(va_list ptr)
{
	char storage;

	storage = va_arg(ptr, int);
	printf("%c", storage);
}

