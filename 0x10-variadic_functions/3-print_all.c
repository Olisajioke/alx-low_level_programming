#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *ptr, *strn = "";

	va_list count;

	va_start(count, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", strn, va_arg(count, int));
					break;
				case 'i':
					printf("%s%d", strn, va_arg(count, int));
					break;
				case 'f':
					printf("%s%f", strn, va_arg(count, double));
					break;
				case 's':
					ptr = va_arg(count, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", strn, ptr);
					break;
				default:
					x++;
					continue;
			}
			strn = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(count);
}
