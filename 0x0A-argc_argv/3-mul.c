#include <stdio.h>
#include "main.h"

/**
*convert_to_int - converts a string to an integer
*@s: string to be converted
*Return: the int converted from the string
*/

int convert_to_int(char *s)
{
int x, z, a, index, f, integer;

x = 0;
z = 0;
a = 0;
index = 0;
f = 0;
integer = 0;

for (index = 0; s[index] != '\0'; index++)
;

for (x = 0; x < index && f == 0; x++)
{
if (s[x] == '-')
++z;
if (s[x] >= '0' && s[x] <= '9')
{
	integer = s[x] - '0';
	if (z % 2)
		integer = -integer;
	a = a * 10 + integer;
	f = 1;
	if (s[x + 1] < '0' || s[x + 1] > '9')
		break;
	f = 0;
}
}

if (f == 0)
return (0);

return (a);
}

/**
*main - multiplies two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = convert_to_int(argv[1]);
num2 = convert_to_int(argv[2]);
result = num1 *num2;

printf("%d\n", result);

return (0);
}
