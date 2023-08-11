#include <stdio.h>
#include <ctype.h>
/**
* main - A program that print alphabet in small letters except q and e followed by new line
*
* Return: 0 (True)
*/
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'q' || alph == 'e')
		{
			continue;
		}
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
