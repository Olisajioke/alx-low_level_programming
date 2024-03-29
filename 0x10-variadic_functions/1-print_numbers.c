#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_numbers - Prints numbers, followed by a new line.
*@separator: The string to be printed between numbers.
*@n: The number of integers passed to the function.
*@...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list digits;
unsigned int count = 0;

va_start(digits, n);

while (count < n)
{
printf("%d", va_arg(digits, int));
if (count != (n - 1) && separator != NULL)
printf("%s", separator);
count++;
}
printf("\n");
va_end(digits);
}
