#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;

	if (head != NULL)
	{
	for (; head->prev != NULL; head = head->prev)
	{
		/* Iterate to the beginning of the list */
	}

	for (; head != NULL; head = head->next)
	{
		total += head->n;
	}
	}

	return (total);
}
