#include <stdio.h>

/**
* main - A function that prints program name followed by a new line
*@argc: number of the arguments to be printed
*@argv: array of arguments to be printed
*Return: 0 (Success)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
