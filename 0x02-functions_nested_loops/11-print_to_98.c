#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers fron x to 98
 * @x: a starting number
 * Return: 0 for success
 */

void print_to_98(int x)
{
	while (x <= 98)
	{
		printf("%d, ", x);
		x++;
	}

	while (x > 98)
	{
		printf("%d, ", x);
		x--;
	}

	if (x == 98)
		printf("%d", x);

	printf("\n");
}
