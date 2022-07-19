#include "main.h"

/**
 * _isupper -Verifies if a character is uppercase
 *@c: The variable containing the char to be checked
 * Return: Display if its upper or lower
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

