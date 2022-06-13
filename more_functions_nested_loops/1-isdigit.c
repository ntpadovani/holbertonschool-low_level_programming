#include "main.h"

/**
 * _isdigit -Verifies if a given input is a digit
 *@c: The variable containing the number to be checked
 * Return: Displays if its a digit or not
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
