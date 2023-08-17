/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	dlistint_t *new_node;

	for (; head->next; head = new_node)
	{
		new_node = head->next;
		free(head->prev);
	}

	free(head);
}
