#include "main.h"
/**
 * _islower - A function tha checks for lowercase character
 * @c : character to be verified
 * Return : 0 or 1 (True or False)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
