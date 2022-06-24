#include"main.h"

/**
*main -A function that will display how much arguments are
*stored on the string.
*@argc: The counter
*@argv: The string
*Return: The number of arguments passed to the string.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
