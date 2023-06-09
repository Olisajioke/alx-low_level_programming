#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	/* Ignore unused variable */
	(void)argv;

	/* Calculate the number of arguments */
	int num_arguments = argc - 1;

	/* Print the number of arguments character by character */
	if (num_arguments == 0)
	{
		_putchar('0');
	}
	else
	{
		while (num_arguments != 0)
		{
			/* Convert the digit to character and print */
			_putchar(num_arguments % 10 + '0');
			num_arguments /= 10;
		}
	}

	/* Print new line character */
	_putchar('\n');

	return (0);
}
