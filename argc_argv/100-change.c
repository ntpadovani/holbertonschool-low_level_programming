#include"main.h"

/**
*main -A program that will calculate how much
*change to give back based on a specific amount
*of money given.
*Using coins of values 25, 10, 5, 2 and 1 cents.
*@argc: The counter for the argv string array
*@argv: The array
*Return: How many coins of each value are needed.
*/

int main(int argc, char *argv[])
{
char *var = argv[1];
int change[5] = {25, 10, 5, 2, 1};
int idx, argvint = atoi(var), cents = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
else
{
	if (*var == '-')
	{
		printf("0\n");
		return (0);
	}
}
for (idx = 0; idx <= 4; idx++)
{
	cents += argvint / change[idx];
	argvint = argvint % change[idx];
}
printf("%d\n", cents);
return (0);
}
