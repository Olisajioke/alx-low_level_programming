#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: num 1
 * @m: num 2
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 63;
	unsigned int index = 0;
	unsigned long int new;
	unsigned long int head = n ^ m;

	while (x >= 0)
	{
		new = head >> x;
		if (new & 1)
			index++;
		x--;
	}

	return (index);
}
