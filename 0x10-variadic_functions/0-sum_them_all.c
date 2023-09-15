#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: number of parameters used
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list listva;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(listva, n);

	for (i = 0; i < n; i++)
		sum += va_arg(listva, int);

	va_end(listva);
	return (sum);
}
