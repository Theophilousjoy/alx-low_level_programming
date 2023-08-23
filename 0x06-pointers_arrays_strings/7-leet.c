#include "main.h"
/**
 * leet -  A function that encodes a string into 1337.
 * @s: string to be coded
 * Return: the enconded string.
 */
char *leet(char *s)
{
	int x;
	int y;
	int z;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	x = 0;

	while (s[x] != '\0')
	{
		y = 0;
		z = 0;
		while (l[y] != '\0')
		{
			if (s[x] == l[y])
			{
				z = y;
				s[x] = e[z];
			}
			y++;
		}
		x++;
	}
	return (s);
}
