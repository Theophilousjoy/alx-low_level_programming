#include "main.h"
/**
* is_palindrome - A function that returns bool (true)
* if the given string is a palindrome
*@s: string that will be checked
*Return: true if palindrome
*/

int is_palindrome(char *s)
{
	int guide = 0;
	int length = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, length, guide));
}

/**
 * find_strlen - A functioin that Returns the length of a string.
 * @s: measure this string.
 *
 * Return: The length of the s.
 */
int find_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += find_strlen(s + length);
	}

	return (length);
}

/**
 * check_palindrome - A function that Checks if a string is a palindrome.
 * @s: Check this string
 * @length: The length of s.
 * @guide: string to be checked.
 *
 * Return:  return 1 if palindrome, otherwise 0
 *
 */
int check_palindrome(char *s, int length, int guide)
{
	if (s[guide] == s[length / 2])
		return (1);

	if (s[guide] == s[length - guide - 1])
		return (check_palindrome(s, length, guide + 1));

	return (0);
}
