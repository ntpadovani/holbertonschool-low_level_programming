#include "main.h"

/**
 *_strlen -a function that returns the length of a string.
 *@s: The string
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}

/**
 * puts2-prints every other character of a string
 *@str: The string
 * Return:void
 */

void puts2(char *str)
{
int every;
every = _strlen(str);

	for (every = 0; str[every] != '\0'; every++)
	{
		if (every % 2 == 0)
		{
			_putchar(str[every]);
			every++;
		}
		else
		{
			every++;
		}
	}
	_putchar('\n');
}
