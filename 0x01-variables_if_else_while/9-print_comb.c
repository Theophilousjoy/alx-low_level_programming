#include <stdio.h>
#include <ctype.h>
/**
* main - A program that prints all single digits with, and space followed by new line
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
	continue;

	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
