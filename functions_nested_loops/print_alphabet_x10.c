#include"main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char alfabeto;
int count = 1;
	while (count <= 10)
	{
		for (alfabeto = 'a'; alfabeto <= 'z'; alfabeto++)
		{
			_putchar(alfabeto);
		}
		_putchar('\n');
		count++;
	}
}

