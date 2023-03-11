#include <stdio.h>
#include "main.h"
/**
 * main - print name of program
 * @argc: count arguments
 * @argv: arguments array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}

