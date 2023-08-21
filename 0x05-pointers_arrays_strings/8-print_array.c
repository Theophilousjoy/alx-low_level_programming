#include "main.h"
/**
*print_array - A function that print number of element of array
*@a: array
*@n: number of elements
*Return: nothing to return
*/
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
	if (inc != n - 1)
		printf("%d, ", a[inc]);
	else
		printf("%d", a[inc]);
	}
	printf("\n");
}
