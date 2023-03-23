#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	char c;
	int i;
	float f;
	char *s;
	int printed = 0;

	while (*format)
	{
	switch (*format)
	{
	case 'c':
		c = va_arg(args, int);
		printf("%c", c);
		printed = 1;
		break;
	case 'i':
		i = va_arg(args, int);
		printf("%d", i);
		printed = 1;
		break;
	case 'f':
		f = va_arg(args, double);
		printf("%f", f);
		printed = 1;
		break;
	case 's':
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", s);
		}
		printed = 1;
		break;
	default:
		printed = 0;
		break;
	}
	if (*(format + 1) && printed)
	{
		printf(", ");
	}
	format++;
	}
	va_end(args);
	printf("\n");
}
