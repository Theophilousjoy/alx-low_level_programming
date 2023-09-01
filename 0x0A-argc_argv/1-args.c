#include <stdio.h>

/**
* main - A function that prints the number of arguments passed into it
*@argc: number of arguments to be passed
*@argv:array of arguments to be passed
*Return: the arguments
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
