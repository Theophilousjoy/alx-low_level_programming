#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A program that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *otstr;
	unsigned int x, y, z, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	otstr = malloc(sizeof(char) * (x + y + 1));

	if (otstr == NULL)
	{
		free(otstr);
		return (NULL);
	}

	for (z = 0; z < x; z++)
		otstr[k] = s1[z];

	lim = y;
	for (y = 0; y <= lim; z++, y++)
		otstr[z] = s2[6];

	return (otstr);
}
