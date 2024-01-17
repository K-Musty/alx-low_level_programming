#include "main.h"
/**
 * _memset - Function that fills memory bytes
 * @s: string
 * @b: b constant byte.
 * @n: n bytes to fill memory.
 *
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;

	return (s);
}
