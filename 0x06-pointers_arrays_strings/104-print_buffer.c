#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that Prints a buffer 10 bytes at a time,
 * starting with the byte position, then
 * showing the hex content and displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int byt, inx;

	for (byt = 0; byt < size; byt += 10)
	{
		printf("%08x: ", byt);

		for (inx = 0; inx < 10; inx++)
		{
			if ((inx + byt) >= size)
				printf("  ");

			else
				printf("%02x", *(b + inx + byt));

			if ((inx % 2) != 0 && inx != 0)
				printf(" ");
		}

		for (inx = 0; inx < 10; inx++)
		{
			if ((inx + byt) >= size)
				break;

			else if (*(b + inx + byt) >= 31 &&
				 *(b + inx + byt) <= 126)
				printf("%c", *(b + inx + byt));

			else
				printf(".");
		}

		if (byt >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
