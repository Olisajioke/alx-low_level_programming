#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t index;

	index = 0;

	if (h == NULL)
	return (index);

	for (; h->prev != NULL; h = h->prev)
	{
	/* Do nothing, just iterate to the beginning */
	}

	for (; h != NULL; h = h->next, index++)
	{
		printf("%d\n", h->n);
	}

	return (index);
}
