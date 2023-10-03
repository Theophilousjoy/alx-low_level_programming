#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * append_text_to_file - A function that appends text at the file end
 * @filename: this is the pointer to the filename
 * @text_content: string to be added to the end
 *
 * Return: returns 1 (success),
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x, lgth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lgth = 0; text_content[lgth];)
			lgth++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	x = write(fd, text_content, lgth);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
