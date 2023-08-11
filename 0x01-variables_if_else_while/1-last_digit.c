#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that finds the last integer in a random number
 *
 * Return: 0 (True)
 */
int main(void)
{
	int n;
	int LastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastNum = n % 10;
	
	if (LastNum == 0);
	{
		printf("LastNum digit of %d is %d and is 0\n", LastNum);
	}
	else
	{
		if (LastNum >5)
		{
			printf("LastNum digit of %d is %d and is greater than 5\n", LastNum);
		}
		else if (LastNum < 6)
		{
			printf("LastNum digit of %d is %d and is less than 6 and not 0\n", LastNum);
		}
	
	return (0);
	}

