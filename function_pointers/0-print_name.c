#include "function_pointers.h"

/**
* print_name - A funtion that prints a name.
*
* @name: The string that contains the name.
* @f: A pointer to a function.
* Return: Void.
*/



void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
