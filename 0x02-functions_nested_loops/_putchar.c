#include "main.h"
#include <unistd.h>
/**
 * _putchar - Prints character followed by new line
 * @c: Character to be printed
 *
 * Return: on success 1
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
