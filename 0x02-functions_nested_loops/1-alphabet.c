#include "main.h"

/**
 * main - prints letters of the alphabet
 * Return: 0 for success
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

	return (0);
}
