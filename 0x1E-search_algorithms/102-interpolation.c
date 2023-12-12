#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *		           of integers using interpolation search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         else, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, a, z;

	if (array == NULL)
		return (-1);

	a = 0;
	z = size - 1;
	while (z >= a)
	{
		x = a + (((double)(z - a) / (array[z] - array[a])) * (value - array[a]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			z = x - 1;
		else
			a = x + 1;
	}

	return (-1);
}
