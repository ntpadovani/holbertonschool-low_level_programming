#include"main.h"

/**
* _strspn -A function that gets the length of a substring.
*
* @s: The string to be evaluated.
* @accept: The string that contains the characters to
*          check for in s.
* Return: The value in bytes.
*/

unsigned int _strspn(char *s, char *accept)
{
	int idx, idx2, idx3, ttlcharbts;

	idx3 = 0;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		ttlcharbts = 0;
		for (idx2 = 0; accept[idx2] != '\0'; idx2++)
		{
			if (s[idx] == accept[idx2])
			{
				idx3++;
				ttlcharbts = 1;
			}
		}
		if (ttlcharbts == 0)
		{
			return (idx3);
		}
	}

	return (0);
}
