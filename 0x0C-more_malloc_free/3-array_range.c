#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	ptr = malloc(i * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[j] = i;
	return (ptr);
}
