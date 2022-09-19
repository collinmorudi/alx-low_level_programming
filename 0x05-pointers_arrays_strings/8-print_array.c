#include <stdio.h>

/**
 * print_array - prints element of the array
 * @a: the array itself
 * @n: the number of elements in the array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
