#include "variadic_functions.h"

/**
* print_all - A function that prints anything.
*
* @format:  Contains the list.
*
* Return:  Void
*/

void print_all(const char * const format, ...)
{
	va_list ptr;
	int idx = 0;
	int idx2 = 0;

	escoge_t option[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(ptr, format);


	while (format[idx] != '\0')
	{
		idx2 = 0;
		while (idx2 < 4)
		{

			if (format[idx] == option[idx2].data)
			{
				option[idx2].f(ptr);
				if (format[idx + 1] != '\0')
				{
					printf(", ");
				}
			}
			idx2++;
		}
		idx++;
	}
	printf("\n");
	va_end(ptr);
}


