#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Description: This function prints values based on the provided format.
 *		The format string specifies the types of arguments.
 *		Supported types: 'c' (char), 'i' (int), 'f' (float), 's' (char *)
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			if (format[i] == 'c')
			{
				printf("%s%c", sep, va_arg(list, int));
			}
			if (format[i] == 'i')
			{
				printf("%s%d", sep, va_arg(list, int));
			}
			if (format[i] == 'f')
			{
				printf("%s%f", sep, va_arg(list, double));
			}
			if (format[i] == 's')
			{
				str = va_arg(list, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
			}

			i++;
			sep = ",\t";
		}
	}

	printf("\n");
	va_end(list);
}
