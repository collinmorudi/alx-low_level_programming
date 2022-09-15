#include <stdio.h>

/**
 * main - prints first the 1st 50 Fibonacci numbers
 * Return: 0 for success
 */

int main(void)
{
	int counter;
	int max = 50;
	long x = 1;
	long y = 2;
	long n;

	printf("%li, %li ", x, y);

	for (counter = 1; counter <= 48; counter++)
	{
		n = x + y;
		printf(", %li", n);
		x += y;
		y += x;
	}

	printf("\n");

	return (0);
}
