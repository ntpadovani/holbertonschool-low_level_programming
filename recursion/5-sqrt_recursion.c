#include"main.h"
/**
*_sqrt_recursion(int n)-A function that calculates the natural square root.
*@n: The number to calculate the square root of.
*Return: The natural square root result.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if(n == 0)
	{
		return (0);
	}	
	else if (n == (n * n) / n)
	{
		return (_sqrt_recursion(n - 1));
	}	
}
