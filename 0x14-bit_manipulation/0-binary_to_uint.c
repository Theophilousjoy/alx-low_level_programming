#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int lgth, base_two;

	if (!b)
		return (0);

	uint = 0;

	for (lgth = 0; b[lgth] != '\0'; lgth++)
		;

	for (lgth--, base_two = 1; lgth >= 0; lgth--, base_two *= 2)
	{
		if (b[lgth] != '0' && b[lgth] != '1')
		{
			return (0);
		}

		if (b[lgth] & 1)
		{
			uint += base_two;
		}
	}

	return (uint);
}

