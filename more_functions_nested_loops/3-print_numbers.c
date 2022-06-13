#include "main.h"

/**
 * print_numbers-Prints the numbers from 0 to 9
 *
 * Return: The result of the multiplication
 */
void print_numbers(void)
{
	char nums;
	int count = 0;

	while (count <= 9)
	{
		for (nums = '0'; nums <= '9'; nums++)
		{
			_putchar(nums);
		}
		_putchar('\n');
		count++;
	}
}
