#include "main.h"

/**
 *print_square -Draws a square in the terminal
 *@size: The size of the square to be printed
 * Return: Void
 */
void print_square(int size)
{

int square;
int space;
	if (size > 0)
	{
		for (square = 1; square <= size; square++)
		{
			for (space = 1; space <= size; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}

	}

