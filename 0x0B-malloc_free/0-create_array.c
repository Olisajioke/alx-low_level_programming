#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int x = 0;

arr = malloc(sizeof(char) * size);

if (size == 0 || arr == NULL)
	return (NULL);

while (x < size)
{
	arr[x] = c;
	x++;
}
return (arr);
}
