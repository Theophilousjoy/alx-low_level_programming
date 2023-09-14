#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that Prints numbers, followed by a new line.
 * @separator: string to be printed
 * @n: integers passed to the function.
 * @...: A variable numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int list;

	va_start(numbs, n);

	for (list = 0; list < n; list++)
	{
	printf("%d", va_arg(numbs, int));
	if (list != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbs);
}
