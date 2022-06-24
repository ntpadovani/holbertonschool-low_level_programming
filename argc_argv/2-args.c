#include"main.h"

/**
*main -A function that displays all arguments received.
*@argc: The counter
*@argv: The string
*Return: The arguments passed
*/

int main(int argc, char *argv[])
{
int idx;
for (idx = 0; idx < argc; idx++)
{
	printf("%s\n", argv[idx]);
}
	return (0);
}
