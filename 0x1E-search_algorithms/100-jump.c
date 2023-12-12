#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         else, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 *              Uses the square root of the array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x, my_jumps, my_steps;

	if (array == NULL || size == 0)
		return (-1);

	my_steps = sqrt(size);
	for (x = my_jumps = 0; my_jumps < size && array[my_jumps] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", my_jumps, array[my_jumps]);
		x = my_jumps;
		my_jumps += my_steps;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, my_jumps);

	my_jumps = my_jumps < size - 1 ? my_jumps : size - 1;
	while (x < my_jumps && array[x] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		x++;
	}
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
