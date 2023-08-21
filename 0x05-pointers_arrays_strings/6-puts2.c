#include "main.h"

/**
 * puts2 - A function that prints one char out of 2 of a string.
 * @str: input string.
 * Return: Nothing to return.
 */
void puts2(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (counter % 2 == 0)
			_putchar(str[counter]);
		counter++;
	}
}
