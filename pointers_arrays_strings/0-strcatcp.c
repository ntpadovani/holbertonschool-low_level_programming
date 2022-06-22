#include "main.h"

/**
 *_strcat - A function that concatenates 2 strings.
 *@src: The source string
 *@dest: The destination string.
 * Return: The concatinated result  string.
 */

char *_strcat(char *dest, char *src)
{
	int lenghtdest = _strlen(dest); /*In here I figure out how big is the dest string pointer & assing it to the variable*/
	int lenghtsrc = _strlen(src); /*In here I figure out how big is the src string pointer & assing it to the variable*/ 
        /*I used the _strlen() function I created before to do that*/
	int totallenght = (lenghtdest + lenghtsrc) + 1;
	int idx  = lenghtdest + 2; /*In here I'm giving the idx stringze of lenghtdest +1 to fit the '\0' later*/
	int idx2 = 0;
	for(; idx < totallenght; idx++)
	{
		dest[idx] = src[idx2];
	}
return (dest);/*In here I return the value of the dest string pointer*/
}
