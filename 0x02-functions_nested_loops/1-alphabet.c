#include "main.h"

/**
 *main - print all aphabet in lowercase
 *code by Olisajioke
 *Return: 0
 */

void print_alphabet(void);
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar(letter);


	_putchar('\n');
}
