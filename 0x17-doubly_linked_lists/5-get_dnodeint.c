#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a given index
 * @head: pointer to head node of the list
 * @index: index
 * Return: pointer to node on the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);

	return (NULL);
}
