#include "main.h"
/**
*_strspn - A function that gets the length
* of a prefix substring
*@s: targeted segment
*@accept: considered bytes
*
*Return: returns the number of bytes in the
* initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
		if (accept[m] == *s)
		{
			byte++;
			break;
		}
		else if ((accept[m + 1]) == '\0')
		return (byte);
		}
		s++;
	}
	return (byte);
}
