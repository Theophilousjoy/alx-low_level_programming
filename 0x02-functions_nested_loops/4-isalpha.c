#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character
 * @c: character to be checked for
 * Return: return 0 or 1 (True or False)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
	return (0);
}
