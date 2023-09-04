#include "main.h"
#include <stdlib.h>
/**
 * create_array - A program that creates an array of chars.
 * @size: array size.
 * @c: character storage*
 * Return: pointer to array char
 */
char *create_array(unsigned int size, char c)
{
	char *aoc;
	unsigned int i;

	if (size == 0)
		return (NULL);

	aoc = malloc(sizeof(c) * size);

	if (aoc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		aoc[i] = c;

	return (aoc);
}
