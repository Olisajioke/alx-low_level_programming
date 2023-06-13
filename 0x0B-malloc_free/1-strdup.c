#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_strdup - duplicate string to new memory space location
*@str: char
*Return: 0
*/

char *_strdup(char *str)
{
char *index;
int x = 0, y = 0;

if (str == NULL)
return (NULL);

while (str[x] != '\0')
x++;

index = malloc(sizeof(char) * (x + 1));

if (index == NULL)
return (NULL);

while (str[y])
{
index[y] = str[y];
y++;
}

return (index);
}
