#include"main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenght = 0, idx = 0;

	while (*(dest + lenght) != '\0')
	{
		lenght++;
	}

	while (idx < n)
	{
		*(dest + lenght) = *(src + idx);
		if (*(src + idx) == '\0')
		{
			break;
		}
		lenght++;
		idx++;
	}
	return (dest);
}
