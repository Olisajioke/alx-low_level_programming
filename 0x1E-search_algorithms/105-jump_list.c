#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         else, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t my_step, my_size_step;
	listint_t *node, *sinister;

	if (list == NULL || size == 0)
		return (NULL);

	my_step = 0;
	my_size_step = sqrt(size);
	node = sinister = list;
	while (sinister->index + 1 < size && sinister->n < value)
	{
		node = sinister;
		while (sinister->index < my_step)
		{
			if (sinister->index + 1 == size)
				break;
			sinister = sinister->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", sinister->index, sinister->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", node->index, sinister->index);

	while (node->index < sinister->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
