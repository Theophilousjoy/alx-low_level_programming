#include "main.h"
/**
 * print_line - A function that prints or draw a straight line
 * @n:parameter
 *
 * Return:no return
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
