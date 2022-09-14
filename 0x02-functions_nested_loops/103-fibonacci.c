#include <stdio.h>

/**
 * main - prints the sum of even Fionacci numbers up to 4,000,000
 * Return: 0 for success
 */

int main(void)
{
	int sum = 1;
	int y;
	int x;
	int sum_even = 0;

	y = 1;
	x = 1;

	while (y < 4000000)
	{
		sum = x + y;
		x = y;
		y = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_even += sum;
	}
	printf("%d\n", sum_even);

	return (0);
}
