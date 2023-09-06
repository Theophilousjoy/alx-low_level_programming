#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* *argstostr - concatenates all the arguments of program.
* @ac: argument counter.
* @av: argument vector.
* Return: NULL if ac == 0 or av == NULL.
*/
char *argstostr(int ac, char **av)
{
	int a, b, c, lth;
	char *str;

	lth = 0;
	c = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			lth++;
			b++;
		}
		lth++;
		a++;
	}
	str = malloc((sizeof(char) + lth) + 1);
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			str[c] = av[a][b];
			b++;
			c++;
		}
		str[c] = '\n';
		c++;
		a++;
	}
	str[c] = '\0';
	return (str);
}
