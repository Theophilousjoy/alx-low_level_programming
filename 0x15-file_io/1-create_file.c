#include "main.h"

/**
 * create_file - A function that Creates a file.
 * @filename: name of file to be created
 * @text_content: point to the string of file to be created
 *
 * Return: returns filename (NULL)
 */
int create_file(const char *filename, char *text_content)
{
	int fn, x, lgth = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (lgth = 0; text_content[lgth];)
			lgth++;
	}
	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	x = write(fn, text_content, lgth);

	if (fn == -1 || x == -1)
		return (-1);

	close(fn);
	return (1);
}
