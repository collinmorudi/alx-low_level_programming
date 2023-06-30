#include "lists.h"

/**
 * list_len - prints the length of list_t linked list
 * @h: linked list
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
