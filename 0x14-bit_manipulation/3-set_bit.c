#include "main.h"

/**
 * set_bit - sets up a bit at a given index to 1
 * @n: points to the num to be changed
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
