#include <stdio.h>
#include "main.h"

/**
*convert_to_int - converts a string to an integer
*@s: string to be converted
*Return: the int converted from the string
*/

int convert_to_int(char *s)
{
int n = 0;
int digit;
int len = 0;
int sign = 0;

for (len = 0; s[len] != '\0'; len++)
;

for (int i = 0; i < len && sign == 0; i++)
{
if (s[i] == '-')
sign++;

if (s[i] >= '0' && s[i] <= '9')
{
	digit = s[i] - '0';
	if (sign % 2)
		digit = -digit;
	n = n * 10 + digit;
	sign = 1;
	if (s[i + 1] < '0' || s[i + 1] > '9')
	break;
	sign = 0;
}

}
if (sign == 0)
return (0);

return (n);
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

if (argc != 3)
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
