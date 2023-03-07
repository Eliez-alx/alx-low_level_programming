/*
 * File: 0-memset.c
 */

#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 *  pointed to by s with the constant byte b
 *  @s: pointer to memory area to be filled
 *  @b: character to fill memory area
 *  @n: number of bytes to be filled
 *  Return: pointer to the memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	for (; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
