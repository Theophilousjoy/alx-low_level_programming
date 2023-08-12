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
		if (alph == 'q' || alph == 'e')
		{
			continue;
		}
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
