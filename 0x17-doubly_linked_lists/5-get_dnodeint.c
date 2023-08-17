#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *ptx;

	len = 0;
	if (head == NULL)
	return (NULL);

	for (ptx = head; ptx != NULL; ptx = ptx->next, len++)
	{
		if (index == len)
		return (ptx);
	}

	return (NULL);
}
