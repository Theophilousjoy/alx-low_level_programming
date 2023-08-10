#include <stdio.h>
/**
 * main - A program that prints the sizes of various types on the computer it is compiled and run on.
 *
 * Return: 0 (True)
 */
int main(void)
{
	int x;
	long int y;
	long long int z;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z))
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
