#include "main.h"
/**
*_strchr -A function that locate a char c
*
*character is not found
*
*@s:string to be checked
*@c:character to be checked
*
*Return: returns pointer to c
*/
char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; (s[m] != c) && (s[m] != '\0'); m++)
		;
	if (s[m] == c)
		return (s + m);
	else
		return (NULL);
}
