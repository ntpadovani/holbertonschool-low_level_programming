#include"main.h"
/**
 * cap_string - capitalizes all words of a string
 * @STR: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *STR)
{
	int cnt = 0, i;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(STR + cnt) >= 97 && *(STR + cnt) <= 122)
		*(STR + cnt) = *(STR + cnt) - 32;
	cnt++;
	while (*(STR + cnt) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(STR + cnt) == separators[i])
			{
				if ((*(STR + (cnt + 1)) >= 97) && (*(STR + (cnt + 1)) <= 122))
					*(STR + (cnt + 1)) = *(STR + (cnt + 1)) - 32;
				break;
			}
		}
		cnt++;
	}
	return (STR);
}
