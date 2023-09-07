#include <stdlib.h>
#include "main.h"

/**
* *_memset - A program that fills memory with a constant byte
* @s: memory area
* @b: char
* @n: number of copy
*
* Return: memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
/**
* *_calloc - A program that allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of element
*
* Return: allocated memory pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *all;

	if (nmemb == 0 || size == 0)
		return (NULL);
	all = malloc(size * nmemb);
	if (all == NULL)
		return (NULL);
	_memset(all, 0, nmemb * size);
	return (all);
}
