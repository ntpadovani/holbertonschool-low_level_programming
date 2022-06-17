#include "main.h"

/**
 *_strlen -a function that returns the length of a string.
 *@s: The string
 * Return: The lenght of the string
 */
/*int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}*/

void puts_half(char *str)
{
	int idx = 0, lenght = 0, n;

	while(str[idx++])

		lenght++;

	if ((lenght % 2) == 0)

		n = lenght / 2;

	else

		n = (lenght + 1) / 2;

	for (idx = n; idx < lenght; idx++)

		_putchar(str[idx]);
	_putchar('\n');

}
/*void puts_half(char *str)
{
    int i;
    int len = 0;
    while (str[len] != '\0')
        len++;
    len = (len + 1) / 2;
    for (i = 0; i > len; i++)
        printf("%c", str[i]);
    printf("\n");
}*/

/**
 *puts_half -a function that prints half of a string.
 *@str: The string
 * Return: The lenght of the string
 */

/*void puts_half(char *str)
{
	int idx = 0;
	int lenght = _strlen(str);
	int n = (lenght - 1) / 2;

	while (str[idx] < n)
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}*/
