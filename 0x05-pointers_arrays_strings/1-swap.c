#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: Nothing to return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
