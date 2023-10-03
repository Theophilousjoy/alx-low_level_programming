#include "main.h"
#include <stdio.h>

/**
 * error_file - A function that checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: nothing to return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - A function that copies contents from file to file
 * @argc: This is the number of arguments in a program
 * @argv: pointer to the arguments in a program
 *
 * Return: returns 0 (success)
 *
 * Description: Cond. If the argument count is incorrect - 97 (exit code)
 * the file does not exist or not readable - 98 (exit code)
 * the file cannot be created or written - 99 (exit code)
 * the file cannot be closed - 100 (exit)
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nofchars, nwrt;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nofchars = 1024;
	while (nofchars == 1024)
	{
		nofchars = read(file_from, buff, 1024);
		if (nofchars == -1)
			error_file(-1, 0, argv);
		nwrt = write(file_to, buff, nofchars);
		if (nwrt == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
