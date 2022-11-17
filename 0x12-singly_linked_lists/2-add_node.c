#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the list.
 * @str: string to store in the list.
 * Return: address of the head node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t num_char;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (num_char = 0; str[num_char]; num_char++)
		;

	new->len = num_char;
	new->next = *head;
	*head = new;

	return (*head);
}
