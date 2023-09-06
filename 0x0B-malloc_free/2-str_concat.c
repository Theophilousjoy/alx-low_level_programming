#include "main.h"

/**
* str_concat - A program that concatenates two strings.
* @s1: string one
* @s2: string two
*
* Return: NULL if failure else Success
*/
char *str_concat(char *s1, char *s2)
{
	char *str_out;
	int i, j = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		l++;
	str_out = malloc(sizeof(char) * l);
	if (str_out == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str_out[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		str_out[j++] = s2[i];
	return (str_out);
}
