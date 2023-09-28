#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long integer.
 * @index: index of the bit.
 *
 * Return: 1 if it actually worked, -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}

