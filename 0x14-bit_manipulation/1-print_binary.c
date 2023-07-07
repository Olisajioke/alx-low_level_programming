#include "main.h"

/**
 * print_binary - displays the binary equivalent of a decimal integer
 * @n: integer to display in binary
 */
void print_binary(unsigned long int n)
{
	int x = 63;
	int count = 0;
	unsigned long int new;

	while (x >= 0)
	{
		new = n >> x;

		if (new & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');

		x--;
	}

	if (!count)
		_putchar('0');
}
