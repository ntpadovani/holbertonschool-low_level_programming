#include "3-calc.h"

/**
 * main - A program that performs simple operations.
 *
 * @argc: Argument counter.
 * @argv: Argument vector.
 *
 * Return: return (0) or return success.
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]))
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
