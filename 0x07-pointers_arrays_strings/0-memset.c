#include "holberton.h"

/**
 * _memset - A function that fills a block of memory with constant byte.
 * @s: memory area of the pointer
 * @b: the const byte.
 * @n: number of bytes of memory to be occupied by b.
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);

}

