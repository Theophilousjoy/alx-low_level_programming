#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* argstostr - A program that concatenates all
* arguments of your program
* @ac: number of arguments
* @av: array of arguments
* Return: pointer to new string
*/
char *argstostr(int ac, char **av)
{
	int a, b, lth = 0;
	char *concat_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			lth++;
	concat_str = malloc(sizeof(char) * (lth + ac + 1));
	if (concat_str == NULL)
		return (NULL);
	lth = 0;
	for (a = 0; b < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			concat_str[lth++] = av[a][b];
		concat_str[lth++] = '\n';
	}
	concat_str[lth] = '\0';
	return (concat_str);
}
