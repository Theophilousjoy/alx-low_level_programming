#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - A function that print password.
 *
 * Return: 0 (True)
 */
int main(void)
{
	int ascii = 2772, x = 0, y, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[x] = random;
		ascii -= random;
		x++;
	}
	if (ascii > 0)
		password[x] = ascii;
	else
	{
		x--;
	}
	for (y = 0; y <= x; y++)
	{
		printf("%c", password[y]);
	}
	return (0);
}
