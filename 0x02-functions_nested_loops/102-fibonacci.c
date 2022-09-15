#include <stdio.h>

/**
 * main - prints first the 1st 50 Fibonacci numbers
 * Return: 0 for success
 */

int main(void)
{
	int counter;
	int max = 48;
	long x = 1;
	long y = 2;
	long n;

	printf("%ld, %ld", x, y);

	for (counter = 0; counter < max; counter++)
	{
		n = x + y;
		printf(", %li", n);
		x = y;
		y = n;
	}

	printf("\n");

	return (0);
}
