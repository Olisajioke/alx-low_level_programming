#include "main.h"

/**
 * count_bits - counts the number of bits that need to be flipped
 * to get from one number to another
 * @num1: first number
 * @num2: second number
 *
 * Return: number of bits to flip
 */
unsigned int count_bits(unsigned long int num1, unsigned long int num2)
{
	int x, bit_count = 0;
	unsigned long int current_bit;
	unsigned long int exclusive_bits = num1 ^ num2;

	for (x = 63; x >= 0; x--)
	{
		current_bit = exclusive_bits >> x;
		if (current_bit & 1)
			bit_count++;
	}

	return (bit_count);
}
