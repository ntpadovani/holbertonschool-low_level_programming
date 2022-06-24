#include"main.h"

/**
*main -A function that multiplies two numbers.
*@argc: The counter
*@argv: The The string
*Return: the total of the multiplication.
*/

int main(int argc, char *argv[])
{
int mult;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}
else
{
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (mult);
}
}
