#include"main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @STR: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *STR)
{
	int cnt = 0;

	while (*(STR + cnt) != '\0')
	{
		if ((*(STR + cnt) >= 97) && (*(STR + cnt) <= 122))
		{
			*(STR + cnt) = *(STR + cnt) - 32;
		}
		cnt++;
	}

	return (STR);
}
