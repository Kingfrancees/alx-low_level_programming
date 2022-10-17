#include <stdio.h>
/**
  * main - Print all single digit numbers using only putchar
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int x;
		for (x = 0; x < 10; x++)
			putchar(x + '0');
		putchar('\n');
	return (0);
}
