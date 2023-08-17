#include "main.h"
/**
 * print_diagonal - A function that prints a diagonal on the terminal
 * @n:parameter
 * Return: no return
 */
void print_diagonal(int n)
{
	int d, dash;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (dash = 0; dash < d; dash++)
				_putchar(' ');
			_putchar('\\');
			if (d == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
