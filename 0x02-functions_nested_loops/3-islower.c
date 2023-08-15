#include "main.h"
/**
 * _islower - A function that checks for lowercase character
 * @c : character to be verified
 * Return : 0 (True)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
