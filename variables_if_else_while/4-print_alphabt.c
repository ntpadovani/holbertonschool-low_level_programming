#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alfabeto;
	for (alfabeto = 'a'; alfabeto <= 'z'; alfabeto++)
	{
		if (alfabeto == 'e')
		{
			alfabeto++;
		}
		else if (alfabeto == 'q')
		{
			alfabeto++;
		}
		putchar(alfabeto);
	}
		putchar('\n');
	return (0);
}

