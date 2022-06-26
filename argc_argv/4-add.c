#include"main.h"
#include<ctype.h>

/**
*main -A program that adds positive numbers.
*@argc: The counter.
*@argv: The string
*Return: The sum total.
*/

int main(int argc, char *argv[])
{
unsigned int sum = 0;
int idx;
char *var;

if (argc < 1)
{
	printf("0\n");
}
else
{
	for (idx = 1; idx < argc; idx++)
	{
		var = argv[idx];	
		if (!isdigit(*var))
		{	
			printf("Error\n");
			return (1);
		}
	sum += atoi(var);
	}
}
	printf("%d\n", sum);
	return (0);
}
