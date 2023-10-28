#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: string
 * @b: constant 
 * @n:
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
