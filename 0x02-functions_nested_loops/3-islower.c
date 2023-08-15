#include "main.h"
/**
 * _islower - A function tha checks for lowercase character
 *
 * Return : 0 or 1 (True or False)
 */
int _islower(int alph)
{
	if (alph >= 'a' && alph <= 'z')
		return (1);

	return (0);
}
