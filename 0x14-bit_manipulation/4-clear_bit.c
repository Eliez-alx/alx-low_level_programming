#include "main.h"

/**
 * clear_bit - sets value of bit to 0 for given index
 * @n: pointer of unsined int
 * @index: index of bit
 * Return: 1 Success otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	if (*n & i)
		*n ^= i;
	return (1);
}
