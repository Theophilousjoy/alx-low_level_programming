#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A function that generates a random valid passwords.
 * Return: 0 (True)
 */
int main(void)
{
	int a = 0, b = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (b < 2772)
	{
		r = rand() % 128;
		if ((b + a) > 2772)
			break;
		b = b + a;
		printf("%b", a);
	}
	printf("%b\n", (2772 - b));
	return (0);
}
