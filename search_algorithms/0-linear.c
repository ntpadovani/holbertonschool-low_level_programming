#include "search_algos.h"

/**
 * linear_search - search for value in int array using linear search
 * @array: pointer to first element of array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is locates or -1 if NULL or value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

