#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - A function that prints strings
*@separator: separator in string form
*@n: number of strings passed for function
*
*Return: nothing to return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strngs;
	unsigned int x;
	char *strg;

	va_start(strngs, n);

	for (x = 0; x < n; x++)
	{
		strg = va_arg(strngs, char *);
		if (strg == NULL)
			printf("(nil)");
		else
			printf("%s", strg);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strngs);
}
