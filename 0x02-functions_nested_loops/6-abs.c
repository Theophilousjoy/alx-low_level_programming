#include "main.h"
/**
 * _abs - A function that returns absolute value of an integer
 * @n: integer to get an absolute value
 * Return: 0 (True)
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
