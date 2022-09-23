#include "main.h"

/**
 * print_number - print an integer
 * @n: number to be printed on stdio
 */

void print_number(int n)
{
	unsigned int tens;
	unsigned int digit;
	unsigned int positive = n;
	double t_start = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (t_start <= positive)
			t_start *= 10;
		tens = t_start / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
