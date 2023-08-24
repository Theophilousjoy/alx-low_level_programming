#include "main.h"
/**
 * rot13 - A function that encodes a string using rot13
 *
 * @s: The input string.
 *
 * Return: The pointer to destination
 */
char *rot13(char *s)
{
	int x = 0, y;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + x) != '\0')
	{
		for (y = 0; y < 52; y++)
		{
			if (*(s + x) == alph[y])
			{
				*(s + x) = rot13[y];
				break;
			}
		}
		x++;
	}
	return (s);
}
