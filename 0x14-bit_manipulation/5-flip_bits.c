#include "main.h"

/**
 * flip_bits - flips bits
 * @n: number
 * @m: second number
 *
 * Return: number of bitts needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int _check = 0;
	unsigned long int k = n ^ m;

	while (k)
	{
		_check += k & 1;
		k >>= 1;
	}
	return (_check);
}
