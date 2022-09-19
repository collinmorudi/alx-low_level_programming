#include "main.h"
#include <string.h>

/**
 * _strlen - calculates the length of a string
 * @s: the string we're working with
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
