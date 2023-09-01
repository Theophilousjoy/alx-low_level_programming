#include "main.h"

/**
 * _strncpy - A function that copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
