#include "main.h"

/**
 * set_bit - sets valueof bit to 1 for a given index
 * @p: pointer of unsigned long int
 * @index: index of bit
 * Return: 1 on Success, otherwise -1
 */
int set_bit(unsigned long int *p, unsigned int index)
{
	unsigned int n;

	if (index > 63)
		return (-1);

	n = 1 << index;
	*p = (*p | n);

	return (1);
}
