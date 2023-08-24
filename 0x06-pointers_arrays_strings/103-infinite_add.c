#include "main.h"
/**
 * infinite_add -  A function or program that adds two numbers
 * @n1: first numb
 * @n2: second numb
 * @r: the result
 * @size_r: result size
 * Return: Print Sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* variable declaration */
	int a = 0, b = 0, c, d = 0, e, f, g = 0;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		d = a;
	else
		d = b;
	if (d + 1 > size_r)
		return (0);
	r[d] = '\0';
	for (c = d - 1 ; c >= 0 ; c--)
	{
		a--;
		b--;
		if (a >= 0)
			e = n1[a] - '0';
		else
			e = 0;
		if (b >= 0)
			f = n2[b] - '0';
		else
			f = 0;
		r[c] = (e + f + g) % 10 + '0';
		g = (e + f + g) / 10;
	}
	if (g == 1)
	{
		r[c + 1] = '\0';
		if (c + 2 > size_r)
			return (0);
		while (c-- >= 0)
			r[c + 1] = r[c];
		r[0] = g + '0';
	}
	return (r);
}
