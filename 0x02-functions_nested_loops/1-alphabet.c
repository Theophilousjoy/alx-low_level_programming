#include "main.h"

/**
 * print_alphabet - A function that prints alphabets in lowercase
 *
 * Return: 0(True)
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
