#iniclude "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - Prints values based on the provided format.
 *@format: The format string specifying the types of arguments.
 *@...: The variable number of arguments to be printed.
 */
void print_all(const char * const format, ...)
{
va_list args;  /* Variable argument list*/
va_start(args, format);

char c;
int i;
float f;
char *s;
int index = 0;  /*Index to traverse the format string*/

/* Loop through each character in the format string */
while (format[index] != '\0')
{
if (format[index] == 'c')
{  /*Character argument*/
c = (char)va_arg(args, int);
printf("%c", c);
}
else if (format[index] == 'i')
{  /* Integer argument*/
i = va_arg(args, int);
printf("%d", i);
}
else if (format[index] == 'f')
{
f = (float)va_arg(args, double);
printf("%f", f);
}
else if (format[index] == 's')
{
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}
index++;
}
va_end(args);
printf("\n");
}
