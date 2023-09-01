#include "main.h"

/**
 * _strstr - A function that locates substring in haystack
 * @haystack: string to be checked
 * @needle: find in haystack
 * Return: 0 (Success)
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *string1, *string2; /*Declaration of vars*/

	while (*haystack != '\0')
	{
		string1 = haystack; /*values for each string*/
		string2 = needle;

		while (*haystack != '\0' && *string2 != '\0' && *haystack == *string2)
		{
			haystack++;
			string2++;
		}
		if (*string2 == '\0')
			return (string1);
		haystack = string1 + 1;
	}
	return (0);
}
