#include <stdio.h>

/**
 * main - A program that prints alphabets in LowerCase and then in UpperCase and followed by a new line.
 *
 * Return: 0 (True)
 */
int main(void)
{
	char cha;

	for (cha  = 'a'; cha <= 'z'; cha++)
		putchar(cha);
	for (cha = 'A'; cha <= 'Z'; cha++)
		putchar(cha);
	putchar('\n');

	return (0);
}
