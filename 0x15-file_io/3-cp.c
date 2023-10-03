#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fn);

/**
 * create_buffer - A function that allocates 1024 bytes for the buffer.
 * @file: This is the name of the file buffers storing char
 * Return: returns pointer to the newly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - A function that files descriptors close
 * @fd: This is the closed descriptor
 */
void close_file(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
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
	int frm, to, re;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	re = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0064);

	do {
		if (frm == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		re = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(buff);
	close_file(to);

	return (0);
}
