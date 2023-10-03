#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that read a text file and print it
 * @filename: textfile to be read
 * @letters: number of letters to be read and printed
 * Return: number of letters read and 0 if fails
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fn;
	ssize_t x;
	ssize_t y;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	y = read(fn, buff, letters);
	x = write(STDOUT_FILENO, buff, y);

	free(buff);
	close(fn);
	return (x);
}
