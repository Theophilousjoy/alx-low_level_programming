#include <stdio.h>

/**
*main- A function that prints the largest prime factor
*of a number
*
*Return: 0 (Success)
*/

int main(void)
{
	long int num = 612852475143;
	int pf;

	while (pf++ < num / 2)
	{
		if (num % pf == 0)
		{
			num /= 2;
			continue;
		}

		for (pf = 3; pf < num / 2; pf += 2)
		{
			if (num % pf == 0)
				num /= pf;
		}
	}
	printf("%ld\n", num);
	return (0);
}
