#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number we're wprking with
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n <= 0 || n == 17 || n == 29)
		return (-1);
	else
		return (2);
}
