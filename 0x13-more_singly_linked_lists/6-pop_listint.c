#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n)
 * @head: double pointer to the head of the list
 *
 * Return: the data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = (*head)->n;

	if (head == NULL || *head == NULL)
		return (0);

	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
