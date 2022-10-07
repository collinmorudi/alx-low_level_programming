#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *p;
	int i, n;

	n = (max - min + 1);

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * n);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		p[i] = min++;

	return (p);
}
