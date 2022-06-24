#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
int idx, sum = 0;
	printf("argc = %d\n", argc);
	printf("Let's see what is in argv[]\n");

	for(idx = 0; idx < argc; idx++)
	{
		printf("argv[%d] = %s\n", idx, argv[idx]);
		sum = sum + atoi(argv[idx]);
		sum += atoi(argv[idx]);
	}
	return (0);
}
