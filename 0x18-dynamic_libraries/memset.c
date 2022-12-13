#include "main.h"

/**
 * _memset - fill n bytes of memory with a constant char value
 * @s: pointer to memory locatioon
 * @b: constant char value
 * @n: number of bytes to fill in the memory
 * Return: memory location
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(s + i) = b;
	}

	return (s);
}
