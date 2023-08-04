#include "main.h"

/**
 * set_bit - sets valueof bit to 1 for a given index
 * @n: pointer of unsigned long int
 * @index: index of bit
 * Return: 1 on Success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
