#include "main.h"
/**
* _print_rev_recursion - A program that prints a string in reverse.
*
*@s: string parameter
*
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
