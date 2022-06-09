#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
			if (number == 9)
			{
				goto nocomma;
			}
		putchar(',');
		putchar(' ');
	}
	nocomma:
	putchar('\n');
	return (0);
}

