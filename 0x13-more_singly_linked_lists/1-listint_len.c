#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: head of the list.
 *
 * Return: numbers of nodes in a list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
