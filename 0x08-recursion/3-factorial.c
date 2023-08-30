#include "main.h"

/**
* factorial - A function that returns the factorial of a given number.
* @n: factorial number
*
* Return: the factorial
*/

int factorial(int n)
{
	int nfac;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	nfac = factorial(n - 1);
	return (n * nfac);
}
