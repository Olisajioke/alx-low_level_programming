#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: concatenated string (s1 + s2)
 */

char *str_concat(char *s1, char *s2)
{
char *strn;
int x, y;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (x = 0; s1[x] != '\0'; x++)
;

for (y = 0; s2[y] != '\0'; y++)
;

strn = malloc(sizeof(char) * (x + y + 1));

if (strn == NULL)
return (NULL);

for (x = 0; s1[x] != '\0'; x++)
{
strn[x] = s1[x];
}

for (y = 0; s2[y] != '\0'; y++)
{
strn[x] = s2[y];
x++;
}

strn[x] = '\0';
return (strn);
}
