#include "function_pointers.h"

/**
* int_index -A function that searches for an integer.
*
* @array: The array to be searched.
* @size: The size of the array.
* @cmp: A pointer to the function to be used.
* Return: The integer that has been found.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	else if (array != NULL && cmp != NULL)
	{
	int idx;
		for (idx = 0; idx < size; idx++)
		{
			if (cmp(array[idx]))
			{
				return (idx);
			}
		}
	}
return (-1);
}

