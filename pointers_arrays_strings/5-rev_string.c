#include "main.h"

/**
 * _strlen -shows the lenght of a strings
 * @s: one of the strings
 * Return: length
*/

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);
}

/**
 * rev_string - Use to reverse the string
 * @s: The string used to reverse
 */

void rev_string(char *s)
{
	int swap1 = 0;
	int swap2 = (_strlen(s) - 1);
	char tmp;

	while (swap1 < swap2)
	{
		tmp = s[swap1];
		s[swap1] = s[swap2];
		s[swap2] = tmp;
		swap1++, swap2--;
	}
}
