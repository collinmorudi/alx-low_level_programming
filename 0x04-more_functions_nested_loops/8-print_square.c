#include "main.h"

/**
 * print_square - prints a square in the terminal
 * @n: determines the lenghth of the square
 */

void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
