#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments into a single string
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: Pointer to the concatenated string, or NULL if there's an error
 */
char *argstostr(int ac, char **av)
{
int x = 0, a = 0, b = 0, z = 0;
char *arr;

if (ac == 0 || av == NULL)
return (NULL);

while (av[x] != NULL)
{
while (av[x][a] != '\0')
{
z++;
a++;
}
x++;
}
z += ac;

arr = malloc(sizeof(char) * (z + 1));
if (arr == NULL)
return (NULL);

x = 0;
while (av[x] != NULL)
{
a = 0;
while (av[x][a] != '\0')
{
arr[b] = av[x][a];
b++;
a++;
}
if (arr[b] == '\0')
{
arr[b++] = '\n';
}
x++;
}
arr[b] = '\0';

return (arr);
}
