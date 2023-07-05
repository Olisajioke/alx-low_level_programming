#include "lists.h"

/**
*free_listint - frees a linked list
*@head: listint_t list to be freed
*/

void free_listint(listint_t *head)
{
listint_t *medium;

for (; head; head = medium)
{
medium = head->next;
free(head);
}
}
