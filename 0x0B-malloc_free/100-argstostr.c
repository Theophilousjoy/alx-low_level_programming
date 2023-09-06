#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* argstostr - A function that concatenates
* @ac: input integer
* @av: doubled pointer array
* Return: 0 (Success)
*/
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, lt = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][]; y++)
			lt++;
	}
	lt += ac;
	str = malloc(sizeof(char) * lt + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		if (str[z] == '\0')
		{
			str[z++] = '\n';
		}
	}
	return (str);
}
