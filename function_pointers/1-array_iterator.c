#include"function_pointers.h"

/**
* array_iterator - A function that executes a
* function given as a parameter on each element of an array.
*
* @array: The array used to choose.
* @size: The size of the array.
* @action: The pointer to execute a function.
* Return: Void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL &&  size > 0 && action != NULL)
	{
	unsigned long int idx;
		for (idx = 0; idx < size; idx++)
		{
			action(array[idx]);
		}
	}
}
