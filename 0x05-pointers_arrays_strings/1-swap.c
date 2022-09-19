#include "main.h"

/**
 * swap_int - swaps the values of the two variables
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
