#include "main.h"

/**
 * get_endianness - checks endianness.
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int _endian, _check = 1;
	char *c = (char *)&_check;

	_endian = *c ? 1 : 0;
	return (_endian);
}
