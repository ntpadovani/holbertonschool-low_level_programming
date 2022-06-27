#include"main.h"

/**
 *str_concat -A function that concatenates two strings.
 *@s1: The first part of the strings to concatenate.
 *@s2: The last part of the string to concatenate.
 *Return: The concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
int lenght = (strlen(s1) + strlen(s2) + 1), idx, idx2;
char *stemp;

printf("Size of lenght: %d\n", lenght);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	stemp = malloc((sizeof(char) * lenght) + 1);
printf("Contents of stemp right now: %s\n", stemp);
	if (stemp == NULL)
	{
		/*free(stemp);*/
		return (NULL);
	}
	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		stemp[idx] = s1[idx];
	}
printf("Contents of stemp right now: %s\n", stemp);
printf("Contents of idx: %d\n", idx);
	for (idx2 = 0; idx < *stemp; idx++)
	{
		stemp[idx] = s2[idx2];
		idx2++;
	}
	return (stemp);
}
