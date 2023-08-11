#include <stdio.h>
#include <ctype.h>
/**
* main - A program that prints small lettered alphabet  in reverse followed by new line
*
* Return: 0 (True)
*/
int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
