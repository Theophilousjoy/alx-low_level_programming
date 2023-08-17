#include "main.h"
#include <stdio.h>

/**
 * _isupper - A function that checks uppercase character
 * @c: Character to be checked
 * Return: 0 (True)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
