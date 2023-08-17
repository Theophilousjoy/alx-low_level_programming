#include "main.h"
/**
 * _isdigit - A function that checks for a digit from 0 to 9
 * @c: Integer parent of character
 *
 * Return: 1 (TRUE) or 0 (FALSE)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
