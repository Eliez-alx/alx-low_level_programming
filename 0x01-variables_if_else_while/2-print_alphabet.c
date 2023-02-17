#include <stdio.h>
/**
 * main - program to prints alphabet in lowercase, followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
