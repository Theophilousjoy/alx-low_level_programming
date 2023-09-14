#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
* print_char - A function that prints a character.
* @arg: arguments pointing to the character
*/
void print_char(va_list arg)
{
	char alpha;

	alpha = va_arg(arg, int);

	printf("%c", alpha);
}

/**
* print_int - A function that prints an integer
* @arg: arguments pointing to the integer
*/
void print_int(va_list arg)
{
	int digit;

	digit = va_arg(arg, int);

	printf("%d", digit);
}


/**
* print_float - A function that prints a floating point
* @arg: arguments pointing to the float
*/
void print_float(va_list arg)
{
	float fig;

	fig = va_arg(arg, double);

	printf("%f", fig);
}

/**
* print_string - A function that prints a string.
* @arg: arguments pointing to the string
*/
void print_string(va_list arg)
{
	char *strg;

	strg = va_arg(arg, char *);

	if (strg == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", strg);
}

/**
*print_all - A function that prints anything
*@format: input format
*
*Return: nothing to return
*/
void print_all(const char * const format, ...)
{
	va_list argts;

	int x = 0, y = 0;

	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(argts, format);

	while (format && (*(format + x)))
	{
		y = 0;

		while (y < 4 && (*(format + x) != *(funcs[y].symbol)))
			y++;

		if (y < 4)
		{
			printf("%s", separator);
			funcs[y].print(argts);
			separator = ", ";
		}

		x++;

	}
	printf("\n");
	va_end(argts);
}
