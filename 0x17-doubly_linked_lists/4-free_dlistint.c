#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	dlistint_t *current;
	dlistint_t *next_node;

	for (current = head; current->next != NULL; current = next_node)
	{
		next_node = current->next;
		free(current);
	}

	free(current);
}
