#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry stage of the programs
 *
 * Return: 0 (True)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		printf("%d is positive\n, n);
	return (0);
