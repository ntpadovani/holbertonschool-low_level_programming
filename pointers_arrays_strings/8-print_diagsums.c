#include"main.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int idx, sum1 = 0, sum2 = 0;

	for (idx = 0; idx < (size * size); idx++)
	{
		if (idx % (size + 1) == 0)
			sum1 += *(a + idx);
		if (idx % (size - 1) == 0 && idx != 0 && idx < size * size - 1)
			sum2 += *(a + idx);
	}
	printf("%d, %d\n", sum1, sum2);
}
