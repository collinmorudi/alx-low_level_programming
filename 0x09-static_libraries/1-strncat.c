#include "main.h"

/**
 * _strncat - concatenate two strings up to n bytes
 * @dest: string to be appended
 * @src: string to append to the other
 * @n: append n number of bytes
 * Return: concatenated the string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
