#include "main.h"

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
	int fn, x, lgth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lgth = 0; text_content[lgth];)
			lgth++;
	}

	fn = open(filename, O_WRONLY | O_APPEND);
	x = write(0, text_content, lgth);

	if (fn == -1 || x == -1)
		return (-1);

	close(fn);

	return (1);
}

