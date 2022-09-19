#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: the string we're working with
 */

void print_rev(char *s)
{
	/* a variable to store length of a string */
	int len = 0;

	/* compute the length of a string */
	while (*(s + len) != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}

	_putchar('\n');
}
