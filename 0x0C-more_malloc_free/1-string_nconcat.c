#include "main.h"
#include <stdlib.h>

/**
* *string_nconcat - A program that concatenates n bytes
* of a string to another string
* @s1: 1st string being appended
* @s2: concatenate string
* @n: num of bytes
*
* Return: resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int x = 0, y = 0, lgth1 = 0, lgth2 = 0;

	while (s1 && s1[lgth1])
		lgth1++;
	while (s2 && s2[lgth2])
		lgth2++;
	if (n < lgth2)
		str = malloc(sizeof(char) * (lgth1 + n + 1));
	else
		str = malloc(sizeof(char) * (lgth1 + lgth2 + 1));
	if (!str)
		return (NULL);
	while (x < lgth1)
	{
		str[x] = s1[x];
		x++;
	}
	while (n < lgth2 && x < (lgth1 + n))
		str[x++] = s2[y++];
	while (n >= lgth2 && x < (lgth1 + lgth2))
		str[x++] = s2[y++];
	str[x] = '\0';
	return (str);
}
