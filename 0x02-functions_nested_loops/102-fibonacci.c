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

	for (counter = 1; counter <= (max / 2); counter++)
	{
		printf("%li %li ", x, y);
		x += y;
		y += x;
	}
	if (max % 2 == 1)
		printf("%li", x);

	printf("\n");

	return (0);
}
