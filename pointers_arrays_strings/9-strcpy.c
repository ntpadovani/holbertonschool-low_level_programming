#include "main.h"

/**
 * _strcpy-Copy a string
 *@dest: one of the strings to be copied
 *@src: The source of the string to be copied
 * Return: the pointer to destination string
*/

char *_strcpy(char *dest, char *src)
{
int idx;
int lenght;

	lenght = _strlen(src);
	for (idx = 0; idx <= lenght; idx++)
	{
		dest[idx] = src[idx];
	}
return (dest);
}
