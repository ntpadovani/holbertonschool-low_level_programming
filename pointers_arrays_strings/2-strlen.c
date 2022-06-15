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
