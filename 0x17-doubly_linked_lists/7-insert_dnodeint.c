#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nx;
	dlistint_t *origin;
	unsigned int z;

	nx = NULL;
	if (idx == 0)
		nx = add_dnodeint(h, n);
	else
	{
		origin = *h;
		z = 1;
		if (origin != NULL)
			for (; origin->prev != NULL; origin = origin->prev)
			{
				/* Iterate to the beginning of the list */
			}
		for (; origin != NULL; origin = origin->next, z++)
		{
			if (z == idx)
			{
				if (origin->next == NULL)
					nx = add_dnodeint_end(h, n);
				else
				{
					nx = malloc(sizeof(dlistint_t));
					if (nx != NULL)
					{
						nx->n = n;
						nx->next = origin->next;
						nx->prev = origin;
						origin->next->prev = nx;
						origin->next = nx;
					}
				}
				break;
			}
		}
	}

	return (nx);
}
