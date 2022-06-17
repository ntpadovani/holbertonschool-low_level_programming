#include "main.h"

/**
 *puts_half -a function that returns the length of a string.
 *@str: The string
 * Return: void
 */
void puts_half(char *str)
{
	int idx = 0, lenght = 0, n;

	while (str[idx++])
	{
		lenght++;
	}
	if ((lenght % 2) == 0)
	{
		n = lenght / 2;
	}
	else
	{
		n = (lenght + 1) / 2;
	}
	for (idx = n; idx < lenght; idx++)
	{
		_putchar(str[idx]);
	}
		_putchar('\n');
}
