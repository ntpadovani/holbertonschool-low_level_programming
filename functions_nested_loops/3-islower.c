#include"main.h"
/**
 * _islower - Entry point
 * @c: Argument
 * Return: (1) is good
 */
int _islower(int c)
{
	if ((c >= 'a') || (c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
