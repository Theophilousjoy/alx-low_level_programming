#include "main.h"

/**
 * main - A function that prints alphabets in lowercase followed by new line
 *
 * Return: 0(True)
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (c <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
