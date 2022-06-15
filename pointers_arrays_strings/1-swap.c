#include "main.h"

/**
 *swap_int -swaps the values of two
 *integers.
 *@a: Holds 1 of the values to be swapped.
 *@b: Holds the other value to be swapped.
 * Return: Void
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *b;
*b = *a;
*a = swap;
}
