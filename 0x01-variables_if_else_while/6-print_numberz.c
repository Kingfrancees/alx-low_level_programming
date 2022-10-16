#include <stdio.h>
/**
 * main - print all digists to base 10 starting from 0
 * return: (0) SUCCESS
 */
int main(void)
{
	int x;
		for (x = 0; x < 10; x++)
			putchar((x % 10) + '0');
		putchar("\n");
	return (0);
}
