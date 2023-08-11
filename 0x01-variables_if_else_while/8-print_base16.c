#include <stdio.h>
#include <ctype.h>
/**
* main - Prints all single digits of base 16 followed by new line
*
* Return: 0 (True)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			num = 'a';
			for (; num <= 'f'; num++)
			{
				putchar(num);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
