#include "main.h"

/**
 * flip_bits - flips number of bits from one number to another
 * @n: first number
 * @m: fliped number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ibits;

	for (ibits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			ibits++;
	}
	return (ibits);
}
