#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: The number of paramters
 * @...: A variable number of parameters
 * Return: If n == 0 - 0
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int l, sum = 0;

	va_start(ap, n);
	for (l = 0; l < n; l++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
