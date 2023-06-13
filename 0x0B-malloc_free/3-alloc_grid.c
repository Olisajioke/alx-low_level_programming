#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a 2D grid of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	a = 0;
	while (a < height)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			while (a >= 0)
			{
				free(grid[a]);
				a--;
			}
			free(grid);
			return (NULL);
		}
		a++;
	}

	a = 0;
	while (a < height)
	{
		b = 0;
		while (b < width)
		{
			grid[a][b] = 0;
			b++;
		}
		a++;
	}

	return (grid);
}
