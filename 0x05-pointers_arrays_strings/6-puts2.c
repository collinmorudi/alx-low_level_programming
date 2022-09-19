#include "main.h"

/**
 * puts2 - prints all characters of a string
 * @str: the string we're working with
 */

void puts2(char *str)
{
	/* a variable to store length of a string */
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
