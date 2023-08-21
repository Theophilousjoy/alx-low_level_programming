#include "main.h"

/**
 * _atoi - A function that converts a string to an integer.
 * @s: input string.
 * Return: int.
 */
int _atoi(char *s)
{
	unsigned int counter = 0, size = 0, os = 0, mn = 1, x = 1, j;

	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
			break;

		if (*(s + counter) == '-')
			mn *= -1;

		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (size > 0)
				x *= 10;
			size++;
		}
		counter++;
	}

	for (j = counter - size; j < counter; j++)
	{
		os = os + ((*(s + j) - 48) * x);
		x /= 10;
	}
	return (os * mn);
}
