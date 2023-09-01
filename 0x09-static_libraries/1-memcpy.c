#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @dest: memory destination
 * @src: memory source
 * @n: size in byte
 * Return: *dest of the pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
