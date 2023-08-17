#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *next;
	dlistint_t *x;

	next = malloc(sizeof(dlistint_t));
	if (next == NULL)
	return (NULL);

	next->n = n;
	next->prev = NULL;
	x = *head;

	if (x != NULL)
	{
	for (; x->prev != NULL; x = x->prev)
		{
			/* Iterate to the beginning of the list */
		}
	}

	next->next = x;

	if (x != NULL)
	{
		x->prev = next;
	}

	*head = next;

	return (next);
}
