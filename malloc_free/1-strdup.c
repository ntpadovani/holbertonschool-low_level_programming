#include"main.h"

/**
*_strdup -A function that returns a pointer to
*a newly allocated space in memory, which contains
*a copy of the string given as a parameter.
*@str: A string pointer of type char.
*Return: A pointer to an allocated space in memory.
*/

char *_strdup(char *str)
{
int lenght = _strlen(str), idx;
char *strcpy;

strcpy = malloc(sizeof(char) * lenght);
if (strcpy == NULL)
{
	return (NULL);
}
for (idx = 0; idx < lenght; idx++)
{
	strcpy[idx] = str[idx];
}
return (strcpy);
free(strcpy);
}
