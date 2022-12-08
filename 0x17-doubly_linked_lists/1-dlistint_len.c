#include "lists.h"

/**
 * dlistint_len - counts and returns number of elements in
 * a doubly linked list
 * @h: pointer to head node of the list
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements += 1;
	}

	return (elements);
}
