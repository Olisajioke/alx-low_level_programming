#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1;
	dlistint_t *pt2;
	unsigned int x;

	ptr1 = *head;

	if (ptr1 != NULL)
	{
		for (; ptr1->prev != NULL; ptr1 = ptr1->prev)
		{
			/* Iterate to the beginning of the list */
		}
	}
	x = 0;

	for (; ptr1 != NULL; ptr1 = ptr1->next, x++)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = ptr1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				pt2->next = ptr1->next;

				if (ptr1->next != NULL)
					ptr1->next->prev = pt2;
			}

			free(ptr1);
			return (1);
		}
		pt2 = ptr1;
	}
	return (-1);
}
