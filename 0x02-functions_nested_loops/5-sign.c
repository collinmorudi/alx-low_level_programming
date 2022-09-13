#include "main.h"

/**
 * print_sign - prints the sign of some integer
 * @x: the number to be tested
 * Return: 1 if greater than 0, 0 if  is equal to 0, and then -1 if less than 0
 */

int print_sign(int x)
{
	if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
