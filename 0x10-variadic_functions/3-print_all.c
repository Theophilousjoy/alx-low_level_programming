#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: arguments type list
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *strg, *septn = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", septn, va_arg(lst, int));
					break;
				case 'x':
					printf("%s%d", septn, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(lst, double));
					break;
				case 's':
					strg = va_arg(lst, char *);
					if (!strg)
						strg = "(nil)";
					printf("%s%s", septn, strg);
					break;
				default:
					x++;
					continue;
			}
			septn = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(lst);
}
