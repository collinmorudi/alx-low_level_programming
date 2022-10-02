#include "main.h"

/**
 * _isalpha - checks if a character is alphabet
 * @c: character to perfon testing on check
 * Return: 1 if is aphabet or 0 if not alphabet
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
