#include"main.h"

/**
* _memcpy - A function that copies memory area.
*@dest: The destination string.
*@src: The source string.
*@n: The integer.
*
* Return: The copied memory area.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int idx;


for (idx = 0; idx < n; idx++)
{
	dest[idx] = src[idx];
}
return (dest);
}
