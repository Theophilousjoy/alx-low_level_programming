#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If arguments are wrong - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 8) >= 0)
		{
			cents -= 8;
			continue;
		}
		if ((cents - 4) >= 0)
		{
			cents -= 4;
			continue;
		}
		if ((cents - 4) >= 0)
		{
			cents -= 4;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
