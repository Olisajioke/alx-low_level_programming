#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *checkNum - checks if a string contains only digits
 *@str: string to check
 *
 *Return: 1 if string contains only digits, 0 otherwise
 */

int checkNum(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str))
{
	if (!isdigit(str[count]))
		return (0);

	count++;
}
return (1);
}
/**
 *convertToInt - converts a string to an integer
 *@str: string to convert
 *
 *Return: converted integer value
 */
int convertToInt(char *str)
{
return (atoi(str));
}

/**
 *main - entry point of the program
 *@argc: number of command line arguments
 *@argv: array of command line arguments
 *Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
int count;
int num;
int sum = 0;
for (count = 1; count < argc; count++)
{
	if (checkNum(argv[count]))
	{
		num = convertToInt(argv[count]);
		sum += num;
	} else
	{
		printf("Error\n");
		return (1);
	}
}

printf("%d\n", sum);

return (0);
