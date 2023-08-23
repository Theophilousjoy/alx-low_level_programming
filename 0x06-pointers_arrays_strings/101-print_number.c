#include "main.h"

/**
 * base10 - A funtion that prints power in 10 base
 * @n: an exponential
 * Return: returns base 10 to power exponential
 */
int base10(int n)
{
	int bas = 10;

	while (n > 0)
	{
		bas *= 10;
		n--;
	}
	return (bas);
}

/**
 * print_number - A function that prints integers
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int powr;

	powr = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while (n / powr == 0)
			powr /= 10;

		while (powr >= 1)
		{
			_putchar((n / powr) + '0');
			n %= powr;
			powr /= 10;
		}
	}
}
