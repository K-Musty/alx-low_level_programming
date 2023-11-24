#include "main.h"

/**
 * get_bit - returns number of bit at index
 * @n:  number.
 * @index: the bit to be return.
 * Return: bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= (sizeof(n) * 8) - 1)
		return ((n >> index) & 1);
	return (-1);
}
