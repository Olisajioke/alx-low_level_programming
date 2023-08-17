#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end
 * of a dlistint_t list.
 *
 * @head: Pointer to the head of the list.
 * @n: Value of the element.
 * Return: The address of the new element, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;   /* Current node pointer */
	dlistint_t *next; /* New node to be added */

	next = malloc(sizeof(dlistint_t));
	if (next == NULL)
	return (NULL);

	next->n = n;
	next->next = NULL;

	x = *head;

	if (x != NULL)
		{
		for (; x->next != NULL; x = x->next)
		{
			/* Loop to find the last node */
		}
		x->next = next;
		}
	else
	{
		*head = next;
	}

	next->prev = x;

	return (next);
}
