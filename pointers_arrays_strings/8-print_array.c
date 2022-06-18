#include "main.h"

/**
 * print_array -A function that prints n elements of an array of integers
 *@a: One of the strings
 *@n: The other string
 * Return: void
 */
void print_array(int *a, int n)
{

int idx;
	for (idx = 0; idx < n; idx++)
	{
		if (idx == (n - 1))
		{
			printf("%d", a[n]);
		}
	else
	{
		printf("%d", a[n]);
		printf(",");
		printf(" ");
	}
	}
	printf("\n");
}
