#include"main.h"

/**
*_pow_recursion -A function that elevates x to the power of y.
*@x: The number to be elevated
*@y: The power for the x to be elevated
*Return: X to the power of Y result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
