#include "main.h"

/**
 * print_diagonal -Draws a diagonal line in the terminal
 *@n: The number of times the diagonal line will be printed
 * Return: Void
 */
void print_diagonal(int n)
{

int linea;
int espacio;
	if (n > 0)
	{
		for (linea = 0; linea < n; linea++)
		{
			for (espacio = 0; espacio < linea; espacio++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}

	}
