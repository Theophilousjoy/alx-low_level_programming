#include "main.h"
/**
* is_prime_number - A function that returns true if the number is prime
*@n: check this number
*
*Return: return Boolean
*/
int is_prime_number(int n)
{
	int begin = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, begin));
}

/**
* is_prime - A function that returns 1 if n is prime number
* @n: check this number
* @begin: number to start check with
*
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int n, int begin)
{
	if (begin <= 1)
		return (1);
	else if (n % begin == 0)
		return (0);
	return (is_prime(n, begin - 1));
}
