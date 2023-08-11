#include <stdio.h>
#include <type.h>

/**
   * main - A program that prints alphabets in lower case
   *
   * Return: zero
   */
int main(void)
{
	char  alphabet= 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
		putchar('\n');
	return (0);
}
