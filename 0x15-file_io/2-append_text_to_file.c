#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: he name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, o, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	o = open(filename, O_RDWR | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
