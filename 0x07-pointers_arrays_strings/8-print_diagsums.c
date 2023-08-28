#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix that will print the sum of diagonals
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int m;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (m = 0; m < size; m++)
	{
		sum1 += a[(size * m) + m];
		sum2 += a[(size * (m + 1)) - (m + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
