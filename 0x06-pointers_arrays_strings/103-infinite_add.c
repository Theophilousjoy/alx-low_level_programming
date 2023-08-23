#include "main.h"
/**
 * rot13 - A function that encodes a string in rot13
 * @s: string to be encoded
 * Return: the string being encoded
 */
char *rot13(char *s)
{
	int a;
	int b;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (s[a] == x[b])
			{
				s[a] = y[b];
				break;
			}
		}
	}
	return (s);
}
