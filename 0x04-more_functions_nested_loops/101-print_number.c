#include "main.h"

/**
 * print_number - prints a number on the terminal
 * @n: the number to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		_putchar(n / 10 + '0');

	if (n / 100)
	{
                _putchar(n / 1 + '0');
		_putchar((n / 10) % 10 + '0');
	}

	_putchar(n % 10 + '0');
}
