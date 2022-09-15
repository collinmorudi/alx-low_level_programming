#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int c, over;
	int max = 98;
	unsigned long x = 1;
	unsigned long y = 1;
	unsigned long sum = 0;
	unsigned long one_billion = 1000000000;
	long x_head, x_tail, y_head, y_tail, sum_head, sum_tail;

	printf("1");

	for (c = 2; c <= 92; c++)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf(", %lu", sum);
	}

	x_head = x / one_billion;
	x_tail = x % one_billion;
	y_head = y / one_billion;
	y_tail = y % one_billion;

	for (; c <= max; c++)
	{
		over = (x_tail + y_tail) / one_billion;
		sum_tail = (x_tail + y_tail) - (one_billion * over);
		sum_head = (x_head + y_head) + over;

		printf(", %lu%lu", sum_head, sum_tail);

		x_head = y_head;
		x_tail = y_tail;
		y_head = sum_head;
		y_tail = sum_tail;
	}

	printf("\n");

	return (0);
}
