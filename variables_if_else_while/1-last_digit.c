#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int ldigt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
		ldigt = n % 10;
		if (ldigt > 5)
		{
			printf(" %d and is greater than 5", ldigt);
		}
		else if (ldigt == 0)
		{
			printf(" %d and is 0", ldigt);
		}
		else if ((ldigt < 6) && (ldigt != 0))
		{
			printf(" %d and is less than 6 and not 0", ldigt);
		}
		else

	return (0);
}
