#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int out = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		out = *s1 - *s2;

	return (out);
}
