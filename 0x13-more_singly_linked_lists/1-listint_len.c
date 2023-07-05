#include "lists.h"

/**
*listint_len - returns the number of elements in a linked list
*@h: listint_t to be looped through
*Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t index = 0;

for (; h; h = h->next)
{
index++;
}

return (index);
}
