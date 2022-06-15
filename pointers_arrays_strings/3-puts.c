#include "main.h"

/**
 *_puts(char *str)-A function that prints a string, followed by a new line.
 *@*str: The string
 * Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
