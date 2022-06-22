#include"main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int idx1, idx2, temp;

	for (idx1 = 0; idx1 < n - 1; idx1++)
	{
		for (idx2 = idx1 + 1; idx2 > 0; idx2--)
		{
			temp = *(a + idx1);
			*(a + idx2) = *(a + (idx2 - 1));
			*(a + (idx2 - 1)) = temp;
		}
	}
}
