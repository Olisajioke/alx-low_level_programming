#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
int **lens;
int a, b;

if (width <= 0 || height <= 0)
return (NULL);
lens = malloc(sizeof(int *) * height);

if (lens == NULL)
return (NULL);

a = 0;
while (a < height)
{
lens[a] = malloc(sizeof(int) * width);
}
if (lens[a] == NULL
{
while (a >= 0)
{
free(lens[a]);
a--;
}
free(lens);
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
lens[a][b] = 0;
b++;
}
a++;
}
return (lens);
}
