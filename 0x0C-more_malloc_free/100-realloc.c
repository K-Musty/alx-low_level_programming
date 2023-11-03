#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocate memory
 * @ptr: pointer
 * @old_size: former memory
 * @new_size: latter memory
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == 0)
		return (malloc(new_size));

	point = malloc(new_size);
	if (point == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
		*(point + (i * new_size)) = 0;
	return (point);
}

