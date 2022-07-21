#include "lists.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: ...
 * Return: returns the length of a string
 */

int _strlen(const char *s)
{
	int idx = 0;

	while (*s != '\0')
	{
		idx++;
		s++;
	}
	return (idx);
}
