#include <stdio.h>
#include "main.h"

/**
 *main - Prints all arguments it receives
 *@argc: Number of arguments
 *@argv: Array of arguments
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}

	return (0);
}
