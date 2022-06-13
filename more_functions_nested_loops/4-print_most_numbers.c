#include "main.h"

/**
 * print_most_numbers -Prints the numbers from 0 to 9 , no 2 and no 4
 *
 * Return: Shows numbers
 */
void print_most_numbers(void)
{
	char nums;
		for (nums = '0'; nums <= '9'; nums++)
		{
			if (nums == '2')
			{
				nums++;
			}
			else if (nums == '4')
			{
				nums++;
			}
			_putchar(nums);
		}
		_putchar('\n');
}
