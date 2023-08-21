#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
	return a + b;
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference between the two integers.
 */
int sub(int a, int b)
{
	return a - b;
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of the two integers.
 */
int mul(int a, int b)
{
	return a * b;
}

/**
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of the division.
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		fprintf(stderr, "Division by zero\n");
		return 0;
	}
}

/**
 * mod - Computes the remainder of division.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of division.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return a % b;
	}
	else
	{
		fprintf(stderr, "Division by zero\n");
		return 0;
	}
}

