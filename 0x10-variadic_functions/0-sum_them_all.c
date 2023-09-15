#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters
 * @n: parameter
 *
 * Return: 0 if n is null
 * sum of parameters in other case
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argts;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(argts, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argts, int);

	va_end(argts);

	return (sum);

}

