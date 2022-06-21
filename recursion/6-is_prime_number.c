#include"main.h"

/**
*is_prime_number -A function that returns 1 if
*the input integer is a prime number, otherwise return 0.
*@n: The integer to check
*Return: the result
*/

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(6 * (n + 1)));
	}
}
