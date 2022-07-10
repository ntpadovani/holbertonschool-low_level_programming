#include"variadic_functions.h"

/**
* print_numbers - A function that prints numbers,
*                 followed by a new line.
*
* @separator: The string to be printed between numbers.
* @n: Argument paramether.
*
* Return: Void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
int idx;
va_start(numbers, n);
	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator && idx != n - 1)
		{
			printf("%s", separator);
		}
	}
printf("\n");
}
