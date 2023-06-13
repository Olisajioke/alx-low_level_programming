#include "main.h"
#include <stdlib.h>

/**
*create_array - create array of size size and assign char c
*@size: size of array
*@c: char to assign
*Description: create array of size size and assign char c
*Return: pointer to array, NULL if fail
*/

char *create_array(unsigned int size, char c)
{
char *len;
unsigned int x = 0;
len = malloc(sizeof(char) * size);

if (size == 0 || len == NULL)
	return (NULL);

while (x < size)
{
	len[x] = c;
	x++;
}

return (len);
