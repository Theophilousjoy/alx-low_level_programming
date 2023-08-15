#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: the int to get the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int b;
	if (n < 0)
		n = -n;
	a = n % 10;
	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
