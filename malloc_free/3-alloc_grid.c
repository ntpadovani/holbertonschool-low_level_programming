#include"main.h"

/**
 *alloc_grid -A function that returns a pointer
 *to a 2 dimensional array of integers.
 *@width: An integer to hold the with size.
 *@height: An integer to hold the with size.
 *Return: An array of two dimensions, with and height.
 */

int **alloc_grid(int width, int height)
{
	int idx, idx2;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (idx = 0; idx < height; idx++)
	{
		array[idx] = malloc(sizeof(int) * width);
		if (array[idx] == NULL)
		{
			free(array[idx]);
			return (NULL);
		}
	}
	for (idx = 0; idx < height; idx++)
	{
		for (idx2 = 0; idx2 < width; idx2++)
		{
			array[idx][idx2] = 0;
		}
	}
return (array);
}
