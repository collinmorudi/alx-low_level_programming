#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: char to check if is lower
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c < 'a' && c > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
