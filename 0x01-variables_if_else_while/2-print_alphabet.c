#include <stdio.h>
#include <ctype.h>
/**
* main - main entry
*
* Return: 0 (True)
*/
int main(void)
{
	int alph;
	
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		alph = tolower(alph);
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
