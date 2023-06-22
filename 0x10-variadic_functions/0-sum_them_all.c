#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - Returns the sum of all its parameters.
*@n: The number of parameters passed to the function.
*@...: A variable number of parameters to calculate the sum of.
*Return: If n == 0 - 0.
*Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int x = 0;
int total = 0;
va_start(ap, n);

while (x < n)
{
total += va_arg(ap, int);
x++;
}

va_end(ap);

return (total);
}
