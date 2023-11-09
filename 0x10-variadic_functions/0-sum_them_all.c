#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of parameters
 * @n: the number of parameters passed
 * @...: variable number of parameters to use
 * Return: If n == 0 - 0.
 * Else- the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

while (i < n)
{
	sum += va_arg(ap, int);
	i++;
}
va_end(ap);

	return (sum);
}
