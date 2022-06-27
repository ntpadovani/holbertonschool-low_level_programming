#include "main.h"

/**
*create_array -A function that creates an array of chars,
*and initializes it with a specific char.
*@size: An integer variable.
*@c: The char to initialize the array with.
*Return: An array of type char with one char in it.
*/

char *create_array(unsigned int size, char c)
{
char *ptrarray = NULL;
unsigned int idx;

if (size == 0)
{
	return (NULL);
}
ptrarray = malloc(sizeof(c) * size);
if (ptrarray == NULL)
{
	return (NULL);
}
for (idx = 0; idx < size; idx++)
{
	ptrarray[idx] = c;
}
return (ptrarray);
}
