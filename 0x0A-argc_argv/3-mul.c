#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The number of arguments to be multiplied
 * @argv: An array of pointers to the arguments
 *
 * Return: If two arguments is received - 0 (Success)
 *         Otherwise - 1
 */
int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	printf("%d\n", product);

	return (0);
}
