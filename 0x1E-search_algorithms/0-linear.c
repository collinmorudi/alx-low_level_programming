#include "search_algos.h"

/**
 * linear_search - search values linearly
 * @array: given array of ints
 * @size: size of the array
 * @value: a value to search for
 * Return: index at which the value's found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
