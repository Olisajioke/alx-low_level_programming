#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for a value in a sorted
 *                             array of integers using binary search.
 * @array: A pointer to the first element of the [sub]array to search.
 * @sinister: The starting index of the [sub]array to search.
 * @dexter: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present, -1.
 *         else, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t sinister, size_t dexter, int value)
{
	size_t x;

	if (dexter < sinister)
		return (-1);

	printf("Searching in array: ");
	while (sinister < dexter)
	{
		printf("%d, ", array[sinister]);
		sinister++;
	}
	printf("%d\n", array[sinister]);

	x = sinister + (dexter - sinister) / 2;
	if (array[x] == value && (x == sinister || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (advanced_binary_recursive(array, sinister, x, value));
	return (advanced_binary_recursive(array, x + 1, dexter, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 *                   of integers using advanced binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
