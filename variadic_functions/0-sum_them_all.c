#include"variadic_functions.h"

/**
* sum_them_all - A function that returns the sum
*                of all its parameters.
*
* @n: Argument paramether.
*
* Return: Return (0) or SUCCESS).
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int idx;
int total = 0;
va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}

	for (idx = 0; idx < n; idx++)
	{
		total += va_arg(ap, const unsigned int);
	}
va_end(ap);
return (total);
}
