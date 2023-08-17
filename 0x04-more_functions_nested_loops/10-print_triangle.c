#include "main.h"
/**
*print_triangle - A function that prints a triangle
*@size:Dimension of triangle
*Return:no return
*/
void print_triangle(int size)
{
	int l, b;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for ((b = size - l); b > 0; b--)
				_putchar(' ');

			for (b = 0; b < l; b++)
				_putchar('#');

			if (l == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}

