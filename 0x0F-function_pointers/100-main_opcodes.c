#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *)main;
	x = 0;

	while (x < bytes)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", str[x]);
			break;
		}
		printf("%02hhx ", str[x]);
		x++;
	}
	return (0);
}
