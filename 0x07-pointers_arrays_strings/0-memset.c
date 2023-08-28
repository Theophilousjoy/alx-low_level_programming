#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: the size of the memory to print
 * @b: the address of memory to print
 * @n: index
 * Return: pointer to the memory area *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
