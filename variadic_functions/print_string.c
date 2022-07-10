#include"variadic_functions.h"

/**
 * print_string - A function that prints a string array.
 * @ptr:  Contains the values.
 * Return:  Void
 */
void print_string(va_list ptr)
{
	char *storage;

	storage = va_arg(ptr, char *);
	if (storage == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", storage);
}

