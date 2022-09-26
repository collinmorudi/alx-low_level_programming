#include "main.h"

/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(dest + i) = *(src + i);
	}
	return (dest);
}
