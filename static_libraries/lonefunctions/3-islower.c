#include"main.h"
/**
 * _islower - check if ltr is lowecase
 * @c: letter to be checked
 * Return: 1 for lower or 0 for upper
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
