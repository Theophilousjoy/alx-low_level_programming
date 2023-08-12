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

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
