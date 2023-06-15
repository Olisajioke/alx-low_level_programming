#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *str2;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	str = malloc(new_size);
	if (!str)
		return (NULL);
	str2 = ptr;

	if (new_size < old_size)
	{
		x = 0;
		while (x < new_size)
		{
			str[x] = str2[x];
			x++;
		}
	}
	if (new_size > old_size)
	{
		x = 0;
		while (x < old_size)
		{
			str[x] = str2[x];
			x++;
		}
	}
	free(ptr);
	return (str);
}
