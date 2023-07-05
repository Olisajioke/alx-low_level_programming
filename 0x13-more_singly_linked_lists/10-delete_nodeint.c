#include "lists.h"

/**
*delete_nodeint_at_index - deletes a node in a linked list at a certain index
*@head: pointer to the first element in the list
*@index: index of the node to delete
*Return: 1 (Success), or -1 (Fail)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *medium = *head;
listint_t *current = NULL;
unsigned int x;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(medium);
return (1);
}

for (x = 0; x < index - 1; x++)
{
if (!medium || !(medium->next))
return (-1);
medium = medium->next;
}

current = medium->next;
medium->next = current->next;
free(current);

return (1);
}
