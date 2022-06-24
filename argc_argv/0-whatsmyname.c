#include"main.h"

/**
*main -A funtion that will display the name of the file
*where it is wiritten.
*@argc: -This is the counter variable.
*@argv: - This is a string array.
*Return: The name of the file
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
