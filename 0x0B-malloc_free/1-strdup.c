#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - A program that returns a pointer to a newly allocated
 * space in memory.
 * @str: string
 *
 * Return: array of chars
 */
char *_strdup(char *str)
{
	char *otstr;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		;
	otstr = (char *)malloc(sizeof(char) * (x + 1));
	if (str == NULL)
		return (NULL);
	for (y = 0; y <= x; y++)
		otstr[y] = str[y];
	return (str);
}
