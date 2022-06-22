#include"main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}
	for ( ; idx < n; idx++)
	{
		dest[idx] = '\0';
	}
	return (dest);
}
