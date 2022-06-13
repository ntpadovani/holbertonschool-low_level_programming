#include "main.h"

/**
 * print_line -Draws a straight line in the terminal
 *@n: The number of times the underscore will be printed
 * Return: Void
 */
void print_line(int n)
{
int line = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (line < n)
		{
			_putchar('_');
			line++;
		}
		_putchar('\n');
	}
}
