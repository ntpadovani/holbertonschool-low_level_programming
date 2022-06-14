#include "main.h"

/**
 * print_diagonal -Draws a diagonal line in the terminal
 *@n: The number of times the diagonal line will be printed
 * Return: Void
 */
void print_diagonal(int n)
{

/*int line = 1;
*int space = 1;
*	
*	if (n > 0)
*	{
*		while (line <= n)
*		{
*			while(space < line)
*			{
*				_putchar(' ');
*				space++;
*			}
*			 _putchar('\\');
*			 _putchar('\n');
*			 line++;
*		}
*	}
*	else (n <= 0)
*	{
*		_putchar('\n');
	}*/

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
