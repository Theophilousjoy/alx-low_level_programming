#include "main.h"
/**
 * print_alphabet_x10 - A function that prints alphabet (lowercase) ten times
 *
 * Return: 0 (True)
 */
void print_alphabet_x10 (void)
{
	int num = 0;
	int alph;
	while(num++ <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

		_putchar(10);
	}
}
