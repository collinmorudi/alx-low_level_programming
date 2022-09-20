#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string we're working with
 */

void puts_half(char *str)
{
	/* a variable to store length of a string */
	int len = 0;
	int min = 0;

	/* compute the length of a string */
	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		min = len / 2;
	else
		min = (len / 2) + 1;


	for (min++; min < len; min++)
		_putchar(str[min]);

	_putchar('\n');
}
