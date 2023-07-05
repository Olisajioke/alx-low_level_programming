
#include "lists.h"

/**
*reverse_listint - reverses a linked list
*@head: pointer to the first node in the list
*Return: pointer to the first node in the new list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *old = NULL;
listint_t *new = NULL;
listint_t *temp = *head;

while (temp)
{
new = temp->next;
temp->next = old;
old = temp;
temp = new;
}

*head = old;

return (*head);
}
