#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read file to STDOUT
 * @filename: text file to read
 * @letters: number of letters to read
 * Return: number of bites read abd printed
 * otherwise 0 if function is NULL or failes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fl;
	ssize_t x, y;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	y = read(fl, b, letters);
	x = write(STDOUT_FILENO, b, y);

	free(b);
	close(fl);
	return (x);
}
