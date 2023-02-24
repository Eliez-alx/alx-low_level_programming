#include "main.h"

/**
 * print_line - print a straight line in terminal
 * @n: number of printed character
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
				{
				_putchar('_');
		}
		_putchar('\n'); 
	}
}
