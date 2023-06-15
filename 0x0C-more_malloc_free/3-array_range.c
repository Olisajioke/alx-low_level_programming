#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *str;
	int x, sum;

	if (min > max)
		return (NULL);

	sum = max - min + 1;

	str = malloc(sizeof(int) * sum);

	if (str == NULL)
		return (NULL);

	x = 0;
	while (min <= max)
	{
		str[x] = min;
		x++;
		min++;
	}

	return (str);
}
