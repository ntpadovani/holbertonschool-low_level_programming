#include "holberton.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int size = 0, cnt = 0;

	while (*(dest + size) != '\0')
	{
		size++;
	}

	while (cnt < n)
	{
		*(dest + size) = *(src + cnt);
		if (*(src + cnt) == '\0')
		{
			break;
		}
		size++;
		cnt++;
	}
	return (dest);
}
