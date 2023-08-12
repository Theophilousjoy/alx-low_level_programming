#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase followed by new line
 * followed by a new line
 * Return: 0 (True)
 */
int main(void)
{
	char alph;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
putchar(alph);
	}
	putchar('\n');
	return (0);
}
