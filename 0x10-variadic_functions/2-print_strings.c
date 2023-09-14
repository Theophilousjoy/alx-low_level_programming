#include "variadic_functions.h"

/**
* print_strings - A function that prints strings
*@separator: separator
*@n: number of strings to be printed
*
*Return: nothing to return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;
	char *str;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(list);
}
