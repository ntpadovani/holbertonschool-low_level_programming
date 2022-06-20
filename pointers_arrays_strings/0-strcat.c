#include "main.h"

/**
 *_strcat - A function that concatenates 2 strings.
 *@src: The source string
 *@dest: The destination string.
 * Return: The concatinated result  string.
 */

char *_strcat(char *dest, char *src)
{
	int lenghtdest = _strlen(dest);
	int lenghtsrc = _strlen(src);
	int totallenght = (lenghtdest + lenghtsrc) + 1;
	int idx  = lenghtdest + 2;
	int idx2 = 0;

	for (; idx < totallenght; idx++)
	{
		dest[idx] = src[idx2];
	}
return (dest);
}
