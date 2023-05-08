#include "main.h"

/**
 * create_file - creates an array of chars, and initializes
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 * Return: 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content)

{
	int o, w, len = o;
	if (filename == NULL)
		return (-1);

	if (text_context != NULL)
	{
		for (len = 0; text_context[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);

}
