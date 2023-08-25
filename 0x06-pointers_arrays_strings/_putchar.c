#include <unistd.h>

/**
 * _putchar - A program that writes the character c to stdout
 * @c: the character to be printed
 *
 * Return: 1 (Success).
 * On error, -1 is returned, and error num is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
