#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charsize;
	int intsize;
	long longintsize;
	long long llintsize;
	float floatsize;
		
		printf("Size of a char: %d byte(s)\n",sizeof(charsize));
		printf("Size of an int: %d byte(s)\n"sizeof(intsize));
		printf("Size of a long int: %d byte(s)\n"sizeof(longintsize));	
		printf("Size of a long long int: %d byte(s)\n"sizeof(llintsize));
		printf("Size of a float: %d byte(s)\n"sizeof(floatsize));

		return (0);
}

