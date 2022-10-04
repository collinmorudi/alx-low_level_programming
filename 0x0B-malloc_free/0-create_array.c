#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array to be created
 * @c: the char to init the array
 * Return: the pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	/* retun null if size = 0 */
	if (size == 0)
		return NULL;

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
		return NULL;

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return ptr;
}
