#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letter
 * of a string to uppercase.
 *@n: string to be modified
 * Return: n (Resulting string)
 */

char *string_toupper(char *n)
{
	int b;

	b = 0;

	while (n[b] != '\0')
	{
		if (n[b] >= 'a' && n[b] <= 'z')
			n[b] = n[b] - 32;
		b++;
	}
	return (n);
}
