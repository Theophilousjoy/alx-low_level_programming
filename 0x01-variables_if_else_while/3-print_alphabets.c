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
		if (alph == 'z')
		{
			alph = 'A';
			for (; alph <= 'Z'; alph++)
			{
				putchar(alph);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
