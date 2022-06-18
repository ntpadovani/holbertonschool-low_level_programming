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
			printf("%d", a[idx]);
		}
		else
		{
			printf("%d", a[idx]);
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
