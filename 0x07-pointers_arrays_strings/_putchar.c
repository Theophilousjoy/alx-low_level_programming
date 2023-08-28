#include <unistd.h>
#include "main.h"
/**
 * _putchar - A function that writes the character c to stdout
 * @c: character to be printed
 *
 * Return: 1 (Success)
 *
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
