#include <stdlib.h>
#include "main.h"

/**
 * _realloc - allocates memory and set all values to 0
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the old array
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
		else
			return (ptr1);
	}

	ptr1 = malloc(new_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)ptr1 + i) = *((char *)ptr + i);
	free(ptr);

	return (ptr1);
}
