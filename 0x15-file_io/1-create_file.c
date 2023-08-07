#include "main.h"
/**
 * create_file - creates file
 * @filename: pointer to a name of file
 * @text_content: a string to write file
 * Return: 1 on success or -1 if filename is NULL
 * or empty or fails
 */
int create_file(const char *filename, char *text_content)
{
	int fl, x, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fl, text_content, len);

	if (fl == -1 || x == -1)
		return (-1);
	close(fl);
	return (1);
}

