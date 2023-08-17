#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t index;

	index = 0;

	if (h == NULL)
	return (index);

	for (; h->prev != NULL; h = h->prev)
	{
	/* Do nothing, just iterate to the beginning */
	}

	for (; h != NULL; h = h->next)
	{
		index++;
	}

	return (index);
}
