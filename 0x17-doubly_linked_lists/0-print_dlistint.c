#include "lists.h"
i
/**
 * print_dlistint - prints all the data of a doubly linked list
 * @h: pointer to head node of the list
 * Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements += 1;
	}

	return (elements);
}
