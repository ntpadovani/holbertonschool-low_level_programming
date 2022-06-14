#include "main.h"

/**
 *print_triangle -Draws a triangle in the terminal
 *@size: The size of the triangle to be printed
 * Return: Void
 */
void print_triangle(int size)
{

int side1;
int side2;
int line;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (side1 = 1; side1 <= size; side1++)
	{
		for (side2 = 1; side2 <= (size - side1); side2++)
		{
			_putchar(' ');
		}
		for (line = 1; line <= side1; line++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
