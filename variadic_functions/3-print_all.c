#include "variadic_functions.h"

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


