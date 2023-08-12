#include <stdio.h>
#include <ctype.h>
/**
* main - A program that print alphabet in small letter followed by new line
*
* Return: 0 (True)
*/
int main(void)
{
	int alph;
	
	for (alph = 'a'; alph <= 'z'; alph++;)
	{
		alph = tolower(alph);
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
