#include "main.h"

/**
 * _abs - finds and return the absolute value
 * @x: number to work with
 * Return: the absolute value of a given number
 */

int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
		return (-x);

	return (0);
}
