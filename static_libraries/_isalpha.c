#include"main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: letter to be checked
 * Return: 1 for lower & upper 0 for other
 */
int _isalpha(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

