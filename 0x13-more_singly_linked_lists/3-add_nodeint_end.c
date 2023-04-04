#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * @n: The integer to be included in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new_node, *temp = *h;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*h)
	{
		*h = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
