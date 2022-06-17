#include "main.h"

/**
 *print_rev(char *s)-A function that prints a string, in reverse.
 *@s: The string
 * Return: void
*/
void print_rev(char *s)
{

	int lenght = 0;
	int i;

	while (*s != '\0')
	{
		lenght++;
		++s;
	}

	s--;

	for (i = lenght; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
