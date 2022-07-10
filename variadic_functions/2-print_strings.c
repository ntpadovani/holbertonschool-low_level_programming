#include"variadic_functions.h"

/**
 * print_strings - A function that prints a,
 *                 string followed by a new line.
 *
 * @separator: The string to be printed in between.
 * @n: Argument paramether.
 *
 * Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	char *store;
	va_list strings;

	va_start(strings, n);
	for (idx = 0; idx < n; idx++)
	{
		store = va_arg(strings, char *);
		if (store == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", store);
		}
		if (separator && idx != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
