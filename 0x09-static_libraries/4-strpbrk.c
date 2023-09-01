#include "main.h"

/**
 * _strpbrk - A function that searches for a string for set of bytes
 * @s: string to be checked
 * @accept:character in string 1 that matches one of the characters in string 2
 *Return: string s that matches any character declared in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s != '\0')
	{
		m = 0;
		while (accept[m] != '\0')
		{
			if (*s == accept[m])
			{
				return (s);
			}
			m++;
		}
		s++;
	}
	return (0);
}
