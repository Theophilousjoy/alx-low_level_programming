#include "main.h"

/**
 * rot13 -  A function that encodes a string using rot13.
 * @s: An input string to be encoded using rot13
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		while ((s[x] >= 'a' && s[x] <= 'z') ||
				(s[x] >= 'A' && s[x] <= 'Z'))
		{
			if ((s[x] >= 'a' && s[x] <= 'm') ||
					(s[x] >= 'A' && s[x] <= 'M'))
				s[x] += 13;
			else
				s[x] -= 13;
			x++;
		}
		x++;
	}
	return (s);
}
