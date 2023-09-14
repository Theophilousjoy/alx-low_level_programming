#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that Returns the sum of all its paramters.
* @n: number of parameters passed to the function.
* @...: number of parameters to calculate the sum from
*
* Return: If n == 0 - 0.
* else - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list allp;
	unsigned int x, sum = 0;

	va_start(allp, n);

	for (x = 0; x < n; x++)
		sum += va_arg(allp, int);
	va_end(allp);
	return (sum);
}
