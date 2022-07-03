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
unsigned int idx, length, length2 tlength;
char *destsrc;
length = strlen(src);
length2 = strlen(dest);
tlength = length + n;

for (idx = 0; idx < n; idx++)
{
	if (destsrc[length2] < n)
	{
		length2++;
	}
	else
	{
		destsrc[idx] = src[idx];
	}
}
destsrc = '\0';
return (destsrc);
}
