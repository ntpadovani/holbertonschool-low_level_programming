#include "main.h"

/**
 * times_table - Shows the 9 times table, starting with 0
 */
void times_table(void)
{
int num, mult, total;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			total = num * mult;

			if (total <= 9)
				_putchar(' ');
			else
				_putchar((total / 10) + '0');

			_putchar((total % 10) + '0');
		}
		_putchar('\n');
	}
}
