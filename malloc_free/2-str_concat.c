#include"main.h"

/**
 *str_concat -A function that concatenates two strings.
 *@s1: The first part of the strings to concatenate.
 *@s2: The last part of the string to concatenate.
 *Return: The concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
int length, idx, idx2;
char *stemp, *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
length = strlen(s1) + strlen(s2);
	stemp = malloc((sizeof(char) * (length + 1)));

	if (stemp != NULL)
	{
		s3 = stemp;
	}
	else
	{
		free(stemp);
		return (NULL);
	}

	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		s3[idx] = s1[idx];
	}
	for (idx2 = 0; s2[idx2] != '\0'; idx2++, idx++)
	{
		s3[idx] = s2[idx2];
	}
	s3[idx] = '\0';
	return (s3);
}
