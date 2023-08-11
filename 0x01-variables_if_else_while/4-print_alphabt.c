#include <stdio.h>

/**
 * main - A program that prints alphabets in LowerCase except q and e followed by new line.
 *
 * Return: 0 (True)
 */
int main(void)
{
	char cha;

	for (cha = 'a'; cha = 'z'; cha++)
	{
		if (cha != 'e' && cha != 'q')
			putchar(cha);
	}
	putchar('\n');

	return (0);
}
