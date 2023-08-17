#include "main.h"
/**
* print_number - A function that prints an integer
* @n: The number to print
*
* No Return
*/
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x > 9)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
