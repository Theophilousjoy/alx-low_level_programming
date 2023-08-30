#include "main.h"

/**
* _sqrt_recursion - A function that returns the natural square root of a number
* @n: number to be square rooted
*
* Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - A function that returns the square root of a number
 * @n: number to be tested
 * @x: square this number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
