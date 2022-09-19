#include "main.h"

/**
 * _strcpy- copies the value of one string to another
 * @dest: destination variable
 * @src: source string
 *
 * Return: a newly copied string
 */

char *_strcpy(char *dest, char *src)
{
	/* a variable to store length of a string */
	int len = 0;
	int i = 0;

	/* compute the length of a string */
	while (*(src + len) != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
