#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Determines if a number is a prime number or not.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - Recursively checks if a number is prime.
 * @n: The number to evaluate.
 * @i: The iterator.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
