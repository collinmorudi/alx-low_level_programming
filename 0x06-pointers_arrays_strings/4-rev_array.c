#include "main.h"

/**
 * reverse_array - reverse elements in the array
 * @a: array to work with
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{

	int tmp = 0;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		tmp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = tmp;
		start++, end--;
	}
}
