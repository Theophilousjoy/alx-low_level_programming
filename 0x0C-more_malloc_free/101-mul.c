#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
* is_digit - A program that checks if a string contains a non-digit char
* @s: string to be evaluated
*
* Return: 0 if a non-digit, otherwise 1
*/
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}
/**
* _strlen - A program that returns the length of a string
* @s: string to be evaluated
*
* Return: length of the string
*/
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{x++;
	}
	return (x);
}
/**
* errors - This handles errors for the main
*/
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
* main - A program that multiplies two positive numbers
* @argc: num of arguments
* @argv: array of arguments
*
* Return: always 0 (Success)
*/
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lgt1, lgt2, lgt, x, pick, dgt1, dgt2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	lgt1 = _strlen(s1);
	lgt2 = _strlen(s2);
	lgt = lgt1 + lgt2 + 1;
	result = malloc(sizeof(int) * lgt);
	if (!result)
		return (1);
	for (x = 0; x <= lgt1 + lgt2; x++)
		result[x] = 0;
	for (lgt1 = lgt1 - 1; lgt1 >= 0; lgt1--)
	{
		dgt1 = s1[lgt1] - '0';
		pick = 0;
		for (lgt2 = _strlen(s2) - 1; lgt2 >= 0; lgt2--)
		{
			dgt2 = s2[lgt2] - '0';
			pick += result[lgt1 + lgt2 + 1] + (dgt1 * dgt2);
			result[lgt1 + lgt2 + 1] = pick % 10;
			pick /= 10;
		}
		if (pick > 0)
			result[lgt1 + lgt2 + 1] += pick;
	}
	for (x = 0; x < lgt - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
