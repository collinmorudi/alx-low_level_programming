#include <stdio.h>

/**
 * main - prints the sum of the multiples of 3 or 5 less than 1024
 * Return: 0 for success
 */

int main(void)
{
	int x;
	int sum;
	int max = 1024;

	sum = 0;

	for (x = 0; x < max; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
	}
	printf("%d\n", sum);

	return (0);
}
