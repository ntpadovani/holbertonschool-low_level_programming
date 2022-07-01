#include"main.h"

/**
* _memset - A function that fills memory with a constant byte.
*@s: The first string.
*@b: The second string.
*@n: The integer.
*
*Return: The filled string.
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int idx;
for (idx = 0; idx < n; idx++)
{
	s[idx] = b;
}
return (s);
}
