#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: linked list to print
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
