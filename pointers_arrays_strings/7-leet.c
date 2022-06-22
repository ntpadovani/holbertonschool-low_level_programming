#include"main.h"
/**
 * leet - encodes a string into 1337
 * @STR: input string.
 * Return: the pointer to dest.
 */

char *leet(char *STR)
{
	int cnt = 0, i;
	int UPPER [] = {65, 69, 79, 84, 76};
	int lower [] = {97, 101, 111, 116, 108};
	int nmbrs [] = {52, 51, 48, 55, 49};

	while (*(STR + cnt) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(STR + cnt) == UPPER[i] || *(STR + cnt) == lower[i])
			{
				*(STR + cnt) = nmbrs[i];
				break;
			}
		}
		cnt++;
	}

	return (STR);
}
