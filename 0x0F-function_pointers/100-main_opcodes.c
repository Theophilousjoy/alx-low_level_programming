#include <stdio.h>
#include <stdlib.h>

/**
* main - A function that prints its own opcodes
* @argc: arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int list, x;
	char *array;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	list = atoi(argv[1]);
	if (list < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (x = 0; x < list; x++)
	{
		if (x == list - 1)
		{
			printf("%02hhx\n", array[x]);
			break;
		}
		printf("%02hhx ", array[x]);
	}
	return (0);
}
