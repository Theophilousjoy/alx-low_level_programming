#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* argstostr - a function that concatenates all the arguments of your program
* @ac: count of args
* @av:array of arguments
*
* Return: pointer to the concat_str
*/
char *argstostr(int ac, char **av)
{
	char *concat_str = NULL;
	int k = 0, a = ac, b, sums = 0, tmp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sums += (len(av[ac]) + 1);
	concat_str = (char *) malloc(sums + 1);

	if (concat_str != NULL)
	{
		while (k < a)
		{
			for (b = 0; av[k][b] != '\0'; b++)
				concat_str[b + tmp] = av[k][b];
			concat_str[tmp + b] = '\n';
			tmp += (b + 1);
			k++;
		}
		concat_str[tmp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (concat_str);
}

/**
* len - A program that returns length of string
* @str: string to be counted
* Return: returns the length
*/
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
