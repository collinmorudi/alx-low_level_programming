#include "main.h"

/**
 * puts2 - prints all characters of a string
 * @str: the string we're working with
 */

void puts2(char *str)
{
	/* a variable to store length of a string */
	/* a variable to store length of a string */
	int len = 0;
	int i = 0;

	/* compute the length of a string */
	while (*(str + len) != '\0')
	{
		len++;
	}

	while (str[i] != '\0' && i < len)
	{
		_putchar(*(str + i));
		i += 2;
	}

	_putchar('\n');
}
