#include "main.h"

/**
 * print_times_table - prints multiplication table
 * @x: argument to work with
 */

void print_times_table(int x)
{
	int row;
	int col;
	int p;

	if (x >= 0 && x <= 15)
	{
		for (row = 0; row <= x; row++)
		{
			for (col = 0; col <= x; col++)
			{
				p = (row * col);
				if (col == 0)
					_putchar('0' + p);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (p <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
					}
					else if (p > 9 && p < 100)
					{
						_putchar(' ');
						_putchar('0' + (p / 10));
						_putchar('0' + (p % 10));
					}
					else if (p >= 100)
					{
						_putchar('0' + (p / 100));
						_putchar('0' + ((p / 10) % 10));
						_putchar('0' + (p % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
