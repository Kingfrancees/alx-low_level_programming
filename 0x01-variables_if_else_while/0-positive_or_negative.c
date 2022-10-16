#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: (0) SUCCESS
 * description: each output is a random numbe * r and tells if uts -ve or +ve
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if  (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
return (0);
}
