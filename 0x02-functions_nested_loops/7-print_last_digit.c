#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: the number to work with
 * Return: the last digit of the input number
 */

int print_last_digit(int x)
{
	if (x < 0)
		x *= -1;

	_putchar('0' + (x % 10));

	return (x % 10);
}
