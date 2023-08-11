#include <stdio.h>
#include <ctype.h>
/**
* main - A program that prints all single digits of base 10 starting from 0 and followed by new line
*
* Return: 0 (True)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
