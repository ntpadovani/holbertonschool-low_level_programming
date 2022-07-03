#include"main.h"

/**
* _strchr - A function that locates a character in a string.
*
* @s: The string to be searched.
* @c: The character to be looked for in the s string.
* Return: The string that was found.
*/

char *_strchr(char *s, char c)
{

int idx;

for (idx = 0; s[idx] != '\0'; idx++)
{
	if (s[idx] == c)
	{
		return (&s[idx]);
	}
}
return (NULL);
}
