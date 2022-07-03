#include"main.h"

/**
* _strpbrk - A function that searches a string
*            for any of a set of bytes.
*
* @s: The string to be evalutated.
* @accept: The string that contains what is to
*          be evaluated in s.
* Return: The total of bytes.
*/

char *_strpbrk(char *s, char *accept)
{
int idx, idx2;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (idx2 = 0; accept[idx2] != '\0'; idx2++)
		{
			if (s[idx] == accept[idx2])
			{
				return (&(s[idx]));
			}
		}
	}

return (0);
}
