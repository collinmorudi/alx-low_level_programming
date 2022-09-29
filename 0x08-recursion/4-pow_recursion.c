#include "main.h"

/**
 * _pow_recursion - returns a power of a number
 * @x: the base number
 * @y: the power
 * Return: the value of the evaluated base number raised to a power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	else if (x == 1 || y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
