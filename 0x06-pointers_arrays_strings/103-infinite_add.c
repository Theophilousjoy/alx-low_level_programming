#include "main.h"
#include <stdio.h>
/**
 * infinite_add - A program that adds two numbers
 * @n1: num one.
 * @n2: num two.
 * @r: buffer to be used.
 * @size_r: buffer size
 * Return: the pointer to destination
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int u = 0, v = 0, w, x, y, z, sum = 0;

	while (*(n1 + u) != '\0')
		u++;
	while (*(n2 + v) != '\0')
		v++;
	if (u >= v)
		x = u;
	else
		x = v;
	if (size_r <= x + 1)
		return (0);
	r[x + 1] = '\0';
	u--, v--, size_r--;
	y = *(n1 + u) - 48, z = *(n2 + v) - 48;
	while (x >= 0)
	{
		w = y + z + sum;
		if (w >= 10)
			sum = w / 10;
		else
			sum = 0;
		if (w > 0)
		*(r + x) = (w % 10) + 48;
		else
			*(r + x) = '0';
		if (u > 0)
		u--, y = *(n1 + u) - 48;
		else
			y = 0;
		if (v > 0)
			v--, z = *(n2 + v) - 48;
		else
			z = 0;
		x--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
