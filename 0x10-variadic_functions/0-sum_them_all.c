#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - A function that sums all its parameters
*@n: parameter
*
*Return: 0 if n is null
*sum of parameters in other case
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
