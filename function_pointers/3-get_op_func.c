#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: operator passed as argument
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] =	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
int idx = 0;

	while (ops[idx].op)
	{
		if (strcmp(s, ops[idx].op) == 0)
		{
			return (ops[idx].f);
		}
		idx++;
	}
	return (ops[idx].f);
}
