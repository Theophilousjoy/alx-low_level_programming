#include <stdio.h>

/**
 * main - A program that prints all arguments it receives.
 * @argc: arguments to be printed
 * @argv: An array of pointers of the printed arguments.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int agmts;

	for (agmts = 0; agmts < argc; agmts++)
		printf("%s\n", argv[agmts]);

	return (0);
}
