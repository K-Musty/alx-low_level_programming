#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Checks memry size of data
 * @b: integer
 *
 * Return: memory allocated
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
