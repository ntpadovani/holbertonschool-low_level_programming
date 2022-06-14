#include "main.h"

/**
 *Entry point -Displays FiZZ, Buzz and FizzBuzz for a given 
 *		situation.
 * Return: Void
 */
int main(void)
{

int fizzy = 1;
	while (fizzy <= 100)
	{
		if ((fizzy % 3 == 0) && (fizzy % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (fizzy % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (fizzy % 5 == 0)
		{
			if(fizzy == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", fizzy);
		}
	fizzy++;
	}
	printf("\n");
return (0);
}
