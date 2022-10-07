#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc function
 * @b: size we need to allocate in memory
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
