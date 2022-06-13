#include "main.h"

/**
 * more_numbers -prints 10 times the numbers, from 0 to 14
 *
 * Return: Void
 */
void more_numbers(void)
{
	int  nums;
	int count = 1;

	while (count <= 10)
	{
		for (nums = 0; nums < 15; nums++)
		{
			if (nums / 10 > 0)
			{
				_putchar((nums / 10) + '0');
			}
			_putchar((nums % 10) + '0');
		}

	_putchar('\n');
	count++;
	}
}
